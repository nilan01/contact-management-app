/* -------------------------------------------
Name: Nilan Patel
Student number: 038908117
Email: npatel127@myseneca.ca
Section: G
Date: March. 17, 2019
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"

int main(void)
{
	struct Contact contact = { {'\0'} };

	printf("Contact Management System\n=========================\n");
	getName(&contact.name);
	getAddress(&contact.address);
	getNumbers(&contact.numbers);
	printf("\n");
	printf("Contact Details\n");
	printf("===============\n");
	printf("Name Details\n-------------\n");
	printf("First name: %s\n", contact.name.firstName);
	printf("Middle initial(s): %s\n", contact.name.middleInitial);
	printf("Last name: %s\n", contact.name.lastName);
	printf("\n");
	printf("Address Details\n-------------\n");
	printf("Street number: %d\n", contact.address.streetNumber);
	printf("Street name: %s\n", contact.address.street);
	printf("Apartment: %d\n", contact.address.apartmentNumber);
	printf("Postal code: %s\n", contact.address.postalCode);
	printf("City: %s\n", contact.address.city);
	printf("\n");
	printf("Phone Numbers:\n-------------\n");
	printf("Cell phone number: %s\n", contact.numbers.cell);
	printf("Home phone number: %s\n", contact.numbers.home);
	printf("Business phone number: %s\n", contact.numbers.business);
	printf("\n");
    printf("Structure test for Contact using functions done!\n");
    
    return 0;
}