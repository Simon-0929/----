#include <stdio.h>
#include <stdlib.h>

int main(void){
    float CUP_PER_PINT = 2.0F;  //�]�i2.0f
    // f�i�D�sĶ����2.0��float�ӸѪR�C���M�q�{�Odouble�����C
    float OUNCE_PER_CUP = 8.0F;
    float TABLESPOON_PER_OUNCE = 2.0F;
    float TEASPOON_PER_TABLESPOON = 3.0F;
    float c;

    printf("��J�M��: ");
    scanf("%f", &c);
    printf("%f cup = %f pint = %f ounce = %f tablespoon = %f teaspoon\n", c, c / CUP_PER_PINT,
           c * OUNCE_PER_CUP, c * OUNCE_PER_CUP * TABLESPOON_PER_OUNCE,
            c * OUNCE_PER_CUP * TABLESPOON_PER_OUNCE * TEASPOON_PER_TABLESPOON);

    system("pause");
    return 0;
}

/*
��J�M��: 1
1.000000 cup = 0.500000 pint = 8.000000 ounce = 16.000000 tablespoon = 48.000000 teaspoon
Press any key to continue . .
*/