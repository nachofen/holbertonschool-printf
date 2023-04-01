#include <limits.h>
#include <stdio.h>
#include "main.h"

	
	/**
	 *  * main - Entry point
	 *   *
	 *    * Return: Always 0
	 *     */
	int main(void)
	{
		    int len;
		        int len2;
			    unsigned int ui;
			        void *addr;

				    len = _printf("Let's try to printf a simple sentence.\n");
				        len2 = printf("Let's try to printf a simple sentence.\n");
					    ui = (unsigned int)INT_MAX + 1024;
					        addr = (void *)0x7ffe637541f0;
						    _printf("Length:[%d, %i]\n", len, len);
						        printf("Length:[%d, %i]\n", len2, len2);
							    _printf("Negative:[%d]\n", -762534);
							        printf("Negative:[%d]\n", -762534);
								    _printf("Unsigned:[%u]\n", ui);
								        printf("Unsigned:[%u]\n", ui);
									    _printf("Unsigned octal:[%o]\n", ui);
									        printf("Unsigned octal:[%o]\n", ui);
										    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
										        printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
											    _printf("Character:[%c]\n", 'H');
											        printf("Character:[%c]\n", 'H');
												    _printf("String:[%s]\n", "");
												        printf("String:[%s]\n", "");
													    _printf("Address:[%p]\n", addr);
													        printf("Address:[%p]\n", addr);
														    len = _printf("Percent:[%%]\n");
														        len2 = printf("Percent:[%%]\n");
															    _printf("Len:[%d]\n", len);
															        printf("Len:[%d]\n", len2);
																    _printf("Unknown:[%r]\n");
																        printf("Unknown:[%r]\n");
																	printf("%s\n", "");
																	_printf("%s\n", "");
																	printf("%s\n", "Hello world!");
																	_printf("%s\n", "Hello world!");
																	printf("%s\n", "");
																	_printf("%s\n", "");
																	printf("%c\n", 'a');
																	_printf("%c\n", 'a');
																	printf("%c\n", '\0');
																	_printf("%c\n", '\0');
																	printf("%i\n", 0);
																	_printf("%i\n", 0);
																	printf("%i\n", -2147483648);
																	_printf("%i\n", -2147483648);
																	printf("%i\n", 2147483647);
																	_printf("%i\n", 2147483647);
																	printf("%d\n", 0);
																	_printf("%d\n", 0);
																	printf("%d\n", -2147483648);
																	_printf("%d\n", -2147483648);
																	printf("%d\n", 2147483647);
																	_printf("%d\n", 2147483647);
																	printf("%%\n");
																	_printf("%%\n");
																	printf("%%%%%%\n");
																	_printf("%%%%%%\n");
																	printf("%S\n", L"Hello");
																	_printf("%S\n", L"Hello");
																	printf("%S\n", NULL);
																	_printf("%S\n", NULL);


																	    return (0);
	

}

