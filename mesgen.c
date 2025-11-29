// Online C compiler
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    int i, n;

    srand(time(0));
    printf("How Many Message You Wanted To Read:");
    scanf("%d", &n);

    printf("\nMessage From God For You:\n");

    // Messages array
    char *messages[101] = {
        "", 
        "You are doing great, do not give up.",
        "That idea was terrible.",
        "I am glad you exist.",
        "You should seriously work on your patience.",
        "Today feels like a fresh start.",
        "Stop procrastinating, time will not wait.",
        "I admire your creativity.",
        "That was careless of you.",
        "Keep smiling, it suits you.",
        "You really messed that up.",
        "Life is too short to stress.",
        "Your excuses are getting old.",
        "You are stronger than you think.",
        "That joke was not funny at all.",
        "Your kindness inspires me.",
        "Sometimes you overcomplicate simple things.",
        "Success is closer than you imagine.",
        "You need to stop comparing yourself to others.",
        "I am proud of how far you have come.",
        "That was such a lazy effort.",
        "Happiness looks good on you.",
        "Do not blame others for your mistakes.",
        "You light up the room when you enter.",
        "That decision was reckless.",
        "Believe in your dreams.",
        "You are wasting too much time online.",
        "Every failure teaches a lesson.",
        "You could have been more careful.",
        "Keep working hard, it will pay off.",
        "Sometimes you give up too quickly.",
        "You are more capable than you realize.",
        "You ignored the important details again.",
        "Gratitude changes everything.",
        "Stop doubting yourself so much.",
        "I respect your honesty.",
        "That excuse sounded weak.",
        "Stay consistent, results will come.",
        "You keep repeating the same mistake.",
        "Your positivity is contagious.",
        "That was rude of you.",
        "Do not be afraid to take risks.",
        "You avoided responsibility there.",
        "I love how passionate you are.",
        "That was a selfish move.",
        "Keep learning every day.",
        "You should listen more than talk sometimes.",
        "Your hard work is visible.",
        "That comment was unnecessary.",
        "The future is bright for you.",
        "You let fear hold you back.",
        "You always find a way to make people laugh.",
        "That was such a careless mistake.",
        "You inspire people without even knowing.",
        "You tend to overthink everything.",
        "I trust you.",
        "That was very irresponsible.",
        "You can achieve anything with focus.",
        "You ignore advice too often.",
        "You are a good listener.",
        "That was immature.",
        "I believe in your potential.",
        "You are being too stubborn.",
        "You bring positive energy wherever you go.",
        "That was a poor choice.",
        "Do not stop dreaming.",
        "You avoided the truth again.",
        "You make people feel special.",
        "That was inconsiderate.",
        "You have a unique perspective.",
        "You wasted a good opportunity.",
        "Keep spreading love.",
        "You gave up too easily.",
        "You are fun to be around.",
        "That was a silly mistake.",
        "Your determination is inspiring.",
        "Sometimes you are too negative.",
        "You make the world a little better.",
        "That was careless planning.",
        "You are braver than yesterday.",
        "You did not try your best this time.",
        "I like how genuine you are.",
        "That was disappointing.",
        "Your smile is priceless.",
        "You broke someones trust.",
        "You are worth more than you think.",
        "You did not take responsibility.",
        "You are getting better every day.",
        "That was not your smartest move.",
        "You inspire hope.",
        "Sometimes you are too quick to judge.",
        "You are a blessing to others.",
        "That was careless of you to say.",
        "You are capable of amazing things.",
        "You handled that poorly.",
        "You are stronger than your fears.",
        "You ignored what really mattered.",
        "You are a wonderful friend.",
        "That was not fair of you.",
        "You are full of potential.",
        "Sometimes you forget how amazing you are."
    };
    for (i = 0; i < n; i++) {
        choice = rand() % 100 + 1;  // random number between 1 and 100
        printf("\nMessage:\n%s\n", messages[choice]);
    }

    return 0;
}