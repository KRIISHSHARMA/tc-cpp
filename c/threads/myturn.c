#include <stdio.h>
#include <pthread.h>
#include <unistd.h> // Include for sleep function

void *myturn(void *arg) {
    while (1) {
        sleep(1);
        printf("MY TURN\n");
    }
    return NULL;
}

void *yourturn(void *arg) {
    while (1) {
        sleep(2);
        printf("YOUR TURN\n");
    }
    return NULL;
}

int main() {
    pthread_t myThread, yourThread;

    // Create threads
    pthread_create(&myThread, NULL, myturn, NULL);
    pthread_create(&yourThread, NULL, yourturn, NULL);

    // Wait for threads to finish
    pthread_join(myThread, NULL);
    pthread_join(yourThread, NULL);

    return 0;
}
