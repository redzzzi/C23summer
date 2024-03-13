#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int tag; // 0 for INT, 1 for CHAR
  union {
    int number;
    char alpha;
  } data;
} Input;

void square(const Input *item, char **result);

int main() {
  int case_count = 0;
  scanf("%d", &case_count);

  Input *orders = (Input *)malloc(case_count * sizeof(Input));
  char **results = (char **)malloc(case_count * sizeof(char *));

  for (int i = 0; i < case_count; i++) {
    char type;
    scanf(" %c", &type);

    if (type == '-' || (type >= '0' && type <= '9')) {
      orders[i].tag = 0;
      scanf("%d", &orders[i].data.number);
    } else {
      orders[i].tag = 1;
      orders[i].data.alpha = type;
    }

    square(&orders[i], &results[i]);
  }

  for (int j = case_count - 1; j >= 0; j--) {
    printf("%s ", results[j]);
    free(results[j]);
  }

  free(orders);
  free(results);

  return 0;
}

void square(const Input *item, char **result) {
  if (item->tag == 0) {
    *result = (char *)malloc(3 * sizeof(char));
    sprintf(*result, "%d", item->data.number * item->data.number);
  } else {
    *result = (char *)malloc(3 * sizeof(char));
    sprintf(*result, "%c%c", item->data.alpha, item->data.alpha);
  }
}

