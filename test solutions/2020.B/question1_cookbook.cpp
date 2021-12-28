#include <iostream>
#include <string.h>

const int MAX_BUF_SIZE = 100;

struct Ingredient
{
	char* name;
	double amount;
};

Ingredient getIngredient()
{
    Ingredient ing;
    std::cout<<"please enter ingrediant's name: ";
    
    // char ing_name[MAX_BUF_SIZE];
    // std::cin>>ing_name;

    // ing.name = new char[strlen(ing_name)+1];
    // strcpy(ing.name, ing_name);

    ing.name = new char[MAX_BUF_SIZE];
    std::cin>>ing.name;

    do{
        std::cout<<"please enter the amount (>0): ";
        std::cin>>ing.amount;
    }while(ing.amount<=0);

    return ing;
}

struct Recipe
{
	char* recipeName;
	Ingredient* arrayOfIngredients;
	int numOfIngredients;
};

Recipe getRecipe()
{
    Recipe rcp;
    char recp_name[MAX_BUF_SIZE];
    std::cin>>recp_name;

    rcp.recipeName = new char[strlen(recp_name)+1];
    strcpy(rcp.recipeName, recp_name);

    do{
        std::cout<<"please enter number of ingeridants (>0): ";
        std::cin>>rcp.numOfIngredients;
    }while(rcp.numOfIngredients<=0);

    rcp.arrayOfIngredients = new Ingredient[rcp.numOfIngredients];

    for(int i=0; i<rcp.numOfIngredients; ++i){
        rcp.arrayOfIngredients[i] = getIngredient();
    }
    return rcp;
}

struct RecipesBook
{
	Recipe*	arrayOfRecipes;
	int 	numOfRecipes;
};

Recipe* getAllRecipesWithIngredient(RecipesBook* pBook, char* ingrediantName)
{

}

RecipesBook* removeRecipeFromBook(RecipesBook* pBook, char* name)
{

}