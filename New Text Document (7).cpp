#include <iostream>

int main() {
    float g[10] = {18, 17, 16, 19, 20, 15, 14, 16, 18, 17};
    float w[10] = {0.1, 0.2, 0.15, 0.1, 0.05, 0.1, 0.1, 0.05, 0.1, 0.15};

    // Calculate weighted average
    float weighted_sum = 0;
    float total_weight = 0;
    for (int i = 0; i < 10; i++) {
        weighted_sum += g[i] * w[i];
        total_weight += w[i];
    }
    
    float weighted_average = weighted_sum / total_weight;

    // Find the highest score
    float max_score = g[0];
    for (int i = 1; i < 10; i++) {
        if (g[i] > max_score) {
            max_score = g[i];
        }
    }

    // Find the score with the most impact
    int max_impact_index = -1;
    float max_impact_value = -1;
    
    for (int i = 0; i < 10; i++) {
        if (w[i] * g[i] > max_impact_value) {
            max_impact_value = w[i] * g[i];
            max_impact_index = i;
        }
    }

    std::cout << "Weighted Average: " << weighted_average << std::endl;
    std::cout << "Highest Score: " << max_score << std::endl;
    
 if(max_impact_index != -1){
  std::cout << "Score with the most impact: " << g[max_impact_index] << std::endl;
 } else{
  std::cout << "No score found with the most impact." << std::endl;
 }

 return 0;
}