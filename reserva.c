struct
{
    int codigo;
    char[20] nome;
} _produto;

typedef struct _produto produto;

void reserva_produto (produto *p)
{
    printf("reservando produto.");
}
