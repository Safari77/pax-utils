int dontcare = 42;
void dummy_func(void) {}
/*
 * Force the absolute pointer into the executable .text section.
 * scanelf will see an absolute relocation modifying an executable segment,
 * fulfilling all criteria to execute the objdump system() call.
 */
__attribute__((section(".text"))) int * const ptr_to_dontcare = &dontcare;
