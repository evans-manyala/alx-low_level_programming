#include "main.h"
/**
 * c_elf - Checks if a file is an ELF file.
 * @elf_id: A pointer to the array containing the ELF magic numbers.
 * Description: If file is not an ELF file - exit code 98.
 */

void c_elf(byte *elf_id)
{
	int x;

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
