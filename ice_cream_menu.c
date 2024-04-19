//This program is written by "Hassan Sardar" roll no."22p-9108".
// This program will show the restaurent menu and total bill.
#include <stdio.h>

int main()
	{
		char i, size, flav, cont;
		int bill = 0, qua;
		float total = 0;
		while (1)
		{
			printf("Please choose the item from the list:\n(A) Espresso\n(B) Over Ice\n(C) Choclate Chillers\n(D) 
					Fusion\ n ");
					scanf("%c", &i);
					if (i == 'a' || i == 'A')
					{
						printf("\nNice choice! Our Signature Chillers Are Loved Across 39 Countries Of the world\n please 
							select the flavour\ n ");
							printf("\n(A) Very vanilla Chiller\n(B) Cocoa locd\n(C) cookies in Cream\n(D) Hazelnut Mocha 
								Chiller\ n(E) Chocolate Macadamia Chiller\ n(F) Italian Dolce Chiller\ n(G) Caramel Nut Chiller\ n(H) Tiramisu Chiller\ n(I) Toffee Nut Chiller: \n ");
								scanf("\n%c", &flav);

								if (flav == 'a' || flav == 'A')
								{
									printf("\nNow Please select the size\n(A) Small:361\n(B) Regular:409\n");
									scanf("\n%c", &size);

									if (size == 'A' || size == 'a')
									{
										bill = bill + 361;
									}
									else if (size == 'b' || size == 'B')
									{
										bill = bill + 409;
									}

									printf("\nPlease enter the quantity:\n");
									scanf("\n%d", &qua);
									bill = bill * qua;
								}
								else if (flav == 'b' || flav == 'B' || flav == 'c' || flav == 'C')
								{
									printf("\nNow Please select the size\n(A) Small:361\n(B) Regular:409\n");
									scanf("\n%c", &size);

									if (size == 'A' || size == 'a')
									{
										bill = bill + 361;
									}
									else if (size == 'b' || size == 'B')
									{
										bill = bill + 409;
									}

									printf("\nPlease enter the quantity:\n");
									scanf("\n%d", &qua);
									bill = bill * qua;
								}
								else if (flav == 'd' || flav == 'D' || flav == 'e' || flav == 'E' || flav == 'f' || flav == 'F' || flav == 'g' || flav == 'G')
								{
									printf("\nNow Please select the size\n(A) Small:396\n(B) Regular:461\n");
									scanf("\n%c", &size);

									if (size == 'A' || size == 'a')
									{
										bill = bill + 396;
									}
									else if (size == 'b' || size == 'B')
									{
										bill = bill + 461;
									}

									printf("\nPlease enter the quantity:\n");
									scanf("\n%d", &qua);
									bill = bill * qua;
								}
								else if (flav == 'h' || flav == 'H' || flav == 'i' || flav == 'I')
								{
									printf("\nNow Please select the size\n(A) Small:399\n(B) Regular:509\n");
									scanf("\n%c", &size);

									if (size == 'A' || size == 'a')
									{
										bill = bill + 399;
									}
									else if (size == 'b' || size == 'B')
									{
										bill = bill + 509;
									}

									printf("\nPlease enter the quantity:\n");
									scanf("\n%d", &qua);
									bill = bill * qua;
								}

								printf("\nIf you want press any key if not enter N\n"); scanf("\n%c", &cont);
								if (cont == 'n' || cont == 'N')
									break;
							}
							else if (i == 'b' || i == 'B')
							{
								printf("Iced Coffe, Lemonade &Iced Teas");
								printf("\nPlease select the Flavour:");
								printf("\n(A) Signature Iced Coffee\n(B) Iced Mocha\n(C) Iced Caramel latte\n(D) Iced 
									Americano\ n(E) Blueberry Lemonade\ n(F) Lychee Lemonade\ n(G) Green Apple Lemonade\ n(H) Peach Lemonade\ n(I) Apple Soda\ n(J) Lime Soda\ n(K) Iced Teaa(Peach / Lemon / Lychee:)\ n ");
									scanf("\n%c", &flav);

									if (flav == 'a' || flav == 'A')
									{
										printf("Now Please select the size\n(A) Small:300\n(B) Regular:374\n");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 300;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 374;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}
									else if (flav == 'b' || flav == 'B')
									{
										printf("Now Please select the size\n(A) Small:300\n(B) Regular:361");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 300;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 361;
										}

										printf("Please enter the quantity:\n");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}
									else if (flav == 'c' || flav == 'C')
									{
										printf("Now Please select the size\n(A) Small:378\n(B) Regular:430\n");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 378;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 430;
										}

										printf("Please enter the quantity:\n");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}
									else if (flav == 'd' || flav == 'D')
									{
										printf("Now Please select the size\n(A) Small:252\n(B) Regular:274\n");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 252;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 274;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}
									else if (flav == 'e' || flav == 'E' || flav == 'f' || flav == 'F' || flav == 'g' || flav == 'G' || flav == 'h' || flav == 'H')
									{
										printf("Now Please select the size\n(A) Small:250\n(B) Regular:291\n");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 250;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 291;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}
									else if (flav == 'i' || flav == 'I')
									{
										printf("Now Please select the size\n(A) Small:335\n(B) Regular:340\n");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 335;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 340;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}
									else if (flav == 'j' || flav == 'J')
									{
										printf("Now Please select the size\n(A) Small:335\n(B) Regular:361\n");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 335;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 361;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}
									else if (flav == 'k' || flav == 'K')
									{
										printf("Now Please select the size\n(A) Small:239\n(B) Regular:291");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 239;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 291;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}

									printf("\nIf you want more press any key if not enter N\n"); scanf("\n%c", &cont);
									if (cont == 'n' || cont == 'N')
										break;
								}
								else if (i == 'c' || i == 'C')
								{
									printf("\nGet a taste of our premium chocolate\n");
									printf("Please select flavour:");
									printf("\n(A) Original Iced Chocolate\n(B) White Iced Chocolate\n(C) Chocolate Delight:");
									scanf("%c", &flav);

									if (flav == 'a' || flav == 'A' || flav == 'b' || flav == 'B')
									{
										printf("Now Please select the size\n(A) Small:348\n(B) Regular:365");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 348;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 365;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}
									else if (flav == 'c' || flav == 'C')
									{
										printf("Now Please select the size\n(A) Small:348\n(B) Regular:400");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 348;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 400;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}

									printf("If you want more press any key if not enter N\n");
									scanf("\n%c", &cont);
									if (cont == 'n' || cont == 'N')
										break;
								}
								else if (i == 'd' || i == 'D')
								{
									printf("Mix Up Our Best For A Unique Experience");
									printf("Please Select flavour\n");
									printf("(A) iced Lime\n(B) Apple Chiller\n(C) Chai Chiller\n(D) Green Tea Chiller:\n");
									scanf("\n%c", &flav);

									if (flav == 'a' || flav == 'A' || flav == 'b' || flav == 'B')
									{
										printf("Now Please select the size\n(A) Small:335\n(B) Regular:365");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 335;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 365;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}
									else if (flav == 'C' || flav == 'c' || flav == 'd' || flav == 'D')
									{
										printf("Now Please select the size\n(A) Small:348\n(B) Regular:400");
										scanf("\n%c", &size);

										if (size == 'A' || size == 'a')
										{
											bill = bill + 348;
										}
										else if (size == 'b' || size == 'B')
										{
											bill = bill + 400;
										}

										printf("Please enter the quantity:");
										scanf("\n%d", &qua);
										bill = bill * qua;
									}

									printf("If you want more press any key if not enter N\n");
									scanf("\n%2c", &cont);
									if (cont == 'n' || cont == 'N')
										break;
								}
							}

							printf("\nYour Total bill is %d", bill); total = (bill *2.5) + (400); printf("\nYour bill after including (2.5percent)tax and (400) service charges is %0.3f\n", total);
							return 0;
						}
