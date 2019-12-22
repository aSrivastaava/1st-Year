#define MAX 25
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int readTotalNums();
void fillArray(int total, int nums[]);
void sortArray(int nums[], int total);
double findMean(int nums[], int total);
double findMedian(int nums[], int total);
int findMode(int nums[], int total);
void printResults(double mean, double median, double mode);

int main()  {
    int nums[MAX];
    int total, num;
    double mean, median, mode;
    do {
        total = readTotalNums(); //guarantee 1-25
        fillArray(total, nums); //read in the #s don't need to check range
        sortArray(nums, total);
        mean = findMean(nums, total);
        median = findMedian(nums, total);
        mode = findMode(nums, total);
        printResults(mean, median, mode);
    } while (num!=0);
    return 0;
}

int readTotalNums() {
    int num;
    do {
        printf("How many numbers? ");
        scanf("%i", &num);
    } while (num < 1 || num > 25);
    return num;
}

void fillArray(int total, int nums[]) {
    int temp;
    int i;
    printf("Please enter %i numbers\n", total);
    for (i = 0; i <= total-1; i++) {
        scanf("\n%i",&nums[i]);
    }
}

void sortArray(int nums[], int total) {
int x;
int y;
for(x=0; x<total; x++) {
    for(y=0; y<total-1; y++) {
        if(nums[y]>nums[y+1]) {
            int temp = nums[y+1];
            nums[y+1] = nums[y];
            nums[y] = temp;
        }
    }
}
}

double findMean(int nums[], int total) {
    int i;
    double sum = 0.0;
    for(i = 0; i < total; i++) {
        sum += nums[i];
    }
    return (sum/total);
}

double findMedian(int nums[], int total) {
    int temp;
    int i,j;
    for(i=0;i<total;i++)
        for(j=i+1;j<total;j++) {
            if(nums[i]>nums[j]) {
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
            }
        }
        if(total%2==0) {
            return (nums[total/2]+nums[total/2-1])/2;
        }else{
            return nums[total/2];
        }
}

int findMode(int nums[],int total) {
    int i, j, maxCount, modeValue;
    int tally[total];
    for (i = 0; i < total; i++) {
         tally[nums[i]]++;
    }
    maxCount = 0;
    modeValue = 0;
    for (j = 0; j < total; j++) {
        if (tally[j] > maxCount) {
            maxCount = tally[j];
            modeValue = j;
        }
    }
    return modeValue;
}

void printResults(double mean, double median, double mode) {
    printf("Mean: %d\tMedian: %d\tMode: %i", mean, median, mode);
}
