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
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};
struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};
struct Numbers {
	char cell[11];
	char home[11];
	char business[11];
};
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};
void getName(struct Name *);
void getAddress(struct Address *);
void getNumbers(struct Numbers *);
