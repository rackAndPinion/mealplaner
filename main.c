#include <stdio.h>

#include "main.h"
#include "food.h"
#include "list.h"
#include "resepi.h"

//databases
struct List *food_list;
struct List *resepi_list;


void food_menu() {
  int nSelection = 0;
  while(nSelection != 6){
    printf("Options:\n"
    "1) Add new foo\n"
    "2) Remove food\n"
    "3) see food\n"
    "4) loade food database\n"
    "5) save food database\n"
    "6) back\n\n");
    scanf("%d",&nSelection);

    if (nSelection==1)
    {
      struct Food *food = newfood(food);
      food_list = addNode(food_list, food, sizeof(struct Food));
    }

    else if (nSelection==2)
    {
      //printf("Which beer do you wanna remove? ");
      //scanf("%s",szType);
      //beer=removeBeer(beer,szType);
    }

    else if (nSelection==3)
    {
      printfoodlist(food_list);
    }

    else if (nSelection==4)
    {
      food_list = loadList(sizeof(struct Food));
    }

    else if (nSelection==5)
    {
      savelist(food_list, sizeof(struct Food));
    }
  }
}

void edit_resepi(struct Resepi *resepi){
  int nSelection = 0;
  while(nSelection != 4){
    printf("Options:\n"
    "1) See food list\n"
    "2) See resepi\n"
    "3) add food to resepi\n"
    "4) back\n\n");
    scanf("%d",&nSelection);

    if (nSelection==1)
    {
      printfoodlist(food_list);
    }

    else if (nSelection==2)
    {
      printResepi(resepi);
    }

    else if (nSelection==3)
    {
      int foodNumberToAdd = 0;
      printf("Type number of food to add to resepi: ");
      scanf("%d",&foodNumberToAdd);
      struct Food *foodToAdd = getfood(food_list,foodNumberToAdd);
      addFoodToResepi(resepi, foodToAdd);
    }
  }
}

void resepi_menu()
{
  int nSelection = 0;
  while(nSelection != 4){
    printf("Options:\n"
    "1) Create new resepi\n"
    "2) Edit resepi\n"
    "2) Remove resepi\n"
    "3) See resepis\n"
    "6) Back\n\n");
    scanf("%d",&nSelection);

    if (nSelection==1)
    {
      struct Resepi *new_resepi = createResepi();
      resepi_list = addNode(resepi_list, new_resepi, sizeof(struct Resepi));
    }

    else if (nSelection==2)
    {
      int resepiNumber = 0;
      scanf("%d",&resepiNumber);
      struct Resepi *ResepiToEdit = getResepi(resepi_list, resepiNumber);

      //edit the selectet resepi in the edit_resepi menu
      edit_resepi(ResepiToEdit);
    }

    else if (nSelection==3)
    {
      printResepiList(resepi_list);
    }
  }
}

//the base menu
int main() {
  //opret database
  food_list=NULL;
  //food = loadfood();
  int nSelection=0;

  while(nSelection != 4){
    printf("Options:\n"
    "1) edit food list\n"
    "2) edit resepi list\n"
    "3) make mealplan\n"
    "4) exit program\n\n");
    scanf("%d",&nSelection);

    if (nSelection==1)
    {
      food_menu();
    }

    else if (nSelection==2)
    {
      resepi_menu();
    }

    else if (nSelection==3)
    {

    }
  }
  return 0;
}


/*
        main_menu
        /       \
  resepi_menu   food_menu
     /
edit_resepi
*/

/*
template of menu

int nSelection = 0;
while(nSelection != 4){
  printf("Options:\n"
  "1) Add new food\n"
  "2) Remove food\n"
  "3) see food\n"
  "6) back\n\n");
  scanf("%d",&nSelection);

  if (nSelection==1)
  {

  }

  else if (nSelection==2)
  {

  }

  else if (nSelection==3)
  {

  }

}
*/
