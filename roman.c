/*
=====================================================================
Created on : 2016-03-16
Author     : Linus Mellberg
=====================================================================
*/

void number_to_roman_numeral(int number, char * numeral){
    const int thresholds[] = {1000, 500, 100, 50, 10, 5, 1, 0};
    const char numerals[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};

    const int correctedThresholds[] = {900, 400, 90, 40, 9, 4, 0};
    const char correctedNumerals[] = {'C', 'C', 'X', 'X', 'I', 'I'};

    int pos = 0;
    while(number > 0) {
        int index;
        for(index = 0; thresholds[index] != 0; ++index){
            int currentThreshold = thresholds[index];
            if(number >= currentThreshold){
                numeral[pos++] = numerals[index];
                number = number - currentThreshold;
                break;
            }
            int currentCorrectedThreshold = correctedThresholds[index];
            if(number >= currentCorrectedThreshold){
                numeral[pos++] = correctedNumerals[index];
                numeral[pos++] = numerals[index];
                number = number - currentCorrectedThreshold;
                break;
            }
        }
    }
    numeral[pos] = '\0';
}