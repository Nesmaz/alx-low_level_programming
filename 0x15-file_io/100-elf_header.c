#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"
/**
 * print_elf_header - prints the information contained in the ELF header
 * @ehdr: pointer to struct containing ELF header
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", ehdr->e_ident[i]);
	printf("\n");
	printf("  Class:                             ");
	printf("%s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              ");
	printf("%s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           ");
	printf("%d (current)\n", ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	printf("%s\n", ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "UNIX - Linux");
	printf("  ABI Version:                       ");
	printf("%d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	printf("%s\n", ehdr->e_type == ET_EXEC ?
			"EXEC (Executable file)" : "DYN (Shared object file)");
	printf("  Entry point address:               ");
	printf("0x%lx\n", (unsigned long)ehdr->e_entry);
}
/**
 * main - entry point
 * @argc: the count of the argument
 * @argv: pointer to the array of arguments
 * Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		fprintf(stderr, "Error: Can't read ELF header of %s\n", argv[1]);
		exit(98);
	}
	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
			ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
		exit(98);
	}
	print_elf_header(&ehdr);
	close(fd);
	return (0);
}
