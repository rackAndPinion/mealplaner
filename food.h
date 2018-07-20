struct Food
{
    char name[20];
    int carbohydrates;
    int protin;
    int fat;

    struct Food *next;
};

struct Food addfood(struct Food *food);
