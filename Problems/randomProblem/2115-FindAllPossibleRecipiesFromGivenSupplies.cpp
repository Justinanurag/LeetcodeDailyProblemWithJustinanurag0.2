#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
    int n = recipes.size();
    unordered_set<string> st(begin(supplies), end(supplies)); // Store supplies in a set for quick lookup
    vector<string> result;
    vector<bool> cooked(n, false); // Track which recipes are already cooked
    
    bool progress = true; // To check if we are able to cook at least one recipe in an iteration

    while (progress) { // Continue until no new recipe can be cooked
        progress = false;
        for (int j = 0; j < n; j++) {
            if (cooked[j]) {
                continue;
            }
            bool canCook = true;
            for (const string& ingredient : ingredients[j]) {
                if (!st.count(ingredient)) { // If ingredient is missing, can't cook
                    canCook = false;
                    break;
                }
            }
            if (canCook) {
                st.insert(recipes[j]); // Add recipe to supplies
                result.push_back(recipes[j]);
                cooked[j] = true;
                progress = true; // A new recipe was cooked, so we continue the loop
            }
        }
    }
    return result;
}

int main() {
    vector<string> recipes = {"Pancake", "Pizza", "Burger"};
    vector<vector<string>> ingredients = {
        {"Flour", "Egg"},     // Ingredients for "Pancake"
        {"Flour", "Cheese"},  // Ingredients for "Pizza"
        {"Bun", "Patty"}      // Ingredients for "Burger"
    };
    vector<string> supplies = {"Flour", "Egg", "Salt", "Cheese"}; // Initial available supplies

    vector<string> result = findAllRecipes(recipes, ingredients, supplies);

    cout << "Recipes that can be made:\n";
    for (const string& recipe : result) {
        cout << recipe << endl;
    }

    return 0;
}
