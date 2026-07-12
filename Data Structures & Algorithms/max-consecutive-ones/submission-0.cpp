#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int sequencia = 0;
        int maiorSequencia = 0;

        for (int valor : nums) {
            if (valor == 1) {
                sequencia++;
            } else {
                if (sequencia > maiorSequencia) {
                    maiorSequencia = sequencia;
                }

                sequencia = 0;
            }
        }

        if (sequencia > maiorSequencia) {
            maiorSequencia = sequencia;
        }

        return maiorSequencia;
    }
};