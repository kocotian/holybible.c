/* THE GOSPEL ACCORDING TO MATTHEW */

typedef void life_t;

typedef struct {
	life_t *son;
	life_t *father;
} genealogyOf;

static genealogyOf God = {
	.son = &God, .father = &God
};

static void
chapterOne(void)
{
	/* The Geneology of Jesus */
	genealogyOf JesusChrist,
				David = { .son = &JesusChrist },
				Abraham = { .son = &David };

	typedef genealogyOf Person;

	Person Isaac = { .father = &Abraham },
		   Jacob = { .father = &Isaac },
		   Judah = { .father = &Jacob },
		   Perez = { .father = &Judah /* by Tamar */ },
		   Zerah = { .father = &Judah /* by Tamar */ },
		   Hezron = { .father = &Perez },
		   Ram = { .father = &Hezron },
		   Amminadab = { .father = &Ram },
		   Nahshon = { .father = &Amminadab },
		   Salmon = { .father = &Nahshon },
		   Boaz = { .father = &Salmon },
		   Obed = { .father = &Boaz },
		   Jesse = { .father = &Obed },
		   DavidTheKing = { .father = &Jesse },
		   Solomon = { .father = &DavidTheKing },
		   Rehoboam = { .father = &Solomon },
		   Abijah = { .father = &Rehoboam },
		   Asa = { .father = &Abijah },
		   Jehoshaphat = { .father = &Asa },
		   Joram = { .father = &Jehoshaphat },
		   Uzziah = { .father = &Joram },
		   Jotham = { .father = &Uzziah },
		   Ahaz = { .father = &Jotham },
		   Hezekiah = { .father = &Ahaz },
		   Manasseh = { .father = &Hezekiah },
		   Amos = { .father = &Manasseh },
		   Josiah = { .father = &Amos },
		   Jechoniah = { .father = &Josiah },
#define deportationToBabylon &Jechoniah
		   Shealtiel = { .father = &Jechoniah },
		   Zerubbabel = { .father = &Shealtiel },
		   Abiud = { .father = &Zerubbabel },
		   Eliakim = { .father = &Abiud },
		   Azor = { .father = &Eliakim },
		   Zadok = { .father = &Azor },
		   Achim = { .father = &Zadok },
		   Eliud = { .father = &Achim },
		   Eleazar = { .father = &Eliud },
		   Matthan = { .father = &Eleazar },
		   JacobFromMatthan = { .father = &Matthan },
		   Joseph = { .father = &JacobFromMatthan };
	struct { Person *husband; Person *son; } Mary;
	Person Jesus = { .father = &God };
	Mary.husband = &Joseph;
	Mary.son = &Jesus;
	Person *Christ = &Jesus;

	printf("So all the generations from Abraham to David were %ld generations, ",
			(&DavidTheKing - &Abraham));
	printf("and from David to the deportation to Babylon %ld generations, ",
			(deportationToBabylon - &DavidTheKing));
	printf("and from the deportation to Babylon to the Christ %ld generations.\n",
			(Christ - deportationToBabylon));
}

int
main(void)
{
	chapterOne();
	return 0;
}
