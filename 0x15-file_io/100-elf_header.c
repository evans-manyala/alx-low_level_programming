#include "main.h"

/**
 * check_ELF - Checks if a file is an ELF file.
 * @elf_id: A pointer array for ELF file.
 * Description: If file is not an ELF file - exit code 98.
 */

void check_ELF(byte *elf_id, int fd)
{
	int x;

	if (read(fd, elf_id, EI_NIDENT) != EI_NIDENT)
	{
		fprintf(stderr, "Error: Can't read file descriptor %d\n", fd);
		exit(98);
	}

	for (x = 0; x < EI_NIDENT; x++)
	{
		if (elf_id[x] != 127
				&& elf_id[x] != 'E'
				&& elf_id[x] != 'L'
				&& elf_id[x] != 'F')
		{
			fprintf(stderr, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_MAGIC - Print magic numbers in an ELF header.
 * @elf_id: A pointer array for ELF magic numbers.
 *
 * Description: Magic numbers.
 */

void print_MAGIC(byte *elf_id)
{
	int x;

	printf("Magic:  ");

	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x", elf_id[x]);

		if (x == EI_NIDENT - 1)
		{
			printf("\n");
		}

		else
		{
			printf(" ");
		}
	}
}
/**
 * print_CLASS - This function will print the class of an ELF header.
 * @elf_id: A pointer to an array containing the ELF class.
 */

void print_CLASS(byte *elf_id)
{
	printf("Class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %#x>\n", elf_id[EI_CLASS]);
	}
	printf("\n");
}

/**
 * print_DATA - Function prints data of an ELF header.
 * @elf_id: A pointer array for ELF
 */

void print_DATA(byte *elf_id)
{
	printf("Data: ");

	switch (elf_id[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
	printf("\n");
}
/**
 * print_VER - Function prints version of ELF header.
 * @elf_id: Pointer array for ELF Version.
 */

void print_VER(byte *elf_id)
{
	printf("Version:  %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
	}
	printf("\n");
}
/**
 * print_OS_ABI - Function Identifies the operating system and
 * ABI for which the file was created.
 * @elf_id: Pointer array for OS_ABI.
 */

void print_OS_ABI(byte *elf_id)
{
	printf("OS/ABI: ");

	switch (elf_id[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STDALONE:
			printf("Stand alone App\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_id[EI_OSABI]);
	}
}

/**
 * print_ABI - Function prints the ABI version
 * @elf_id: Pointer array for ELF ABI version.
 */

void print_ABI(byte *elf_id)
{
	printf("ABI Version: ");

	switch (elf_id[EI_DATA])
	{
		case ELFDATA2MSB:
			elf_id[EI_ABIVERSION] >>= 8;
			break;
	}
}
/**
 * main -
 *
 */

int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file %s\n",argv[1]);
		exit(98);
	}

	byte elf_id[EI_NIDENT];
	check_ELF
	Elf64_Ehdr *header;


	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_ELF(header->elf_id);
	printf("ELF Header:\n");
	print_MAGIC(header->elf_id);
	print_CLASS(header->elf_id;
	print_DATA(header->elf_id);
	print_VER(header->elf_id;
	print_OS_ABI(header->elf_header);
	print_ABI(header->elf_id;
	print_type(header->e_type, header->elf_id);
	print_entry(header->e_entry, header->elf_id);

	free(header);
	close_elf(o);
	return (0);
}
