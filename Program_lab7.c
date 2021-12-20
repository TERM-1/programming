#include <stdio.h>
#include <math.h>
//create  data types : 12 months (task_1)
enum Month {January = 1, February, March, April, May, June, July, August, September, October, November, December};
struct Round {
    double r;
};
 
//struct of task_3
struct ADSL {
        unsigned DSL : 1;
        unsigned PPP : 1;
        unsigned Link : 1; 
    };

// data types input of task_3
union Value {
    int bytes;
    struct ADSL project;
};

//calc in task_2
double calcLength(struct Round *c) {
    return c->r;
}



///main 
int main () {
    printf("%s\n","===Task 1===");
    printf("Month: %d\n\n", November);

    printf("%s\n","===Task 2===");
    struct Round fig;
        fig.r = 55;
        printf("Length: %lf\n\n", calcLength(&fig));

    printf("%s\n","===Task 3===");
    union Value v;
    printf("Input your number = ");
    // Question: why you scanf into 'bytes' variable and then 'project' value also changes?
        scanf("%x", &v.project);
        printf("%d   %d   %d\n", v.project.DSL, v.project.Link, v.project.PPP);

        return 0;
    }


