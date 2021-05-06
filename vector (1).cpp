#include <stdio.h>


struct vector
{
        int* m_array;
        int m_capacity;
        int m_current_size;
};

void vector_init(vector* v)
{
        v->m_array = new int[1];
        v->m_capacity = 1;
        v->m_current_size = 0;
}

// Function to add an element at the last
void vector_push_back(vector* v, int data)
{
        if (v->m_current_size == v->m_capacity) {
                int* temp = new int[2 * v->m_capacity];
                for (int i = 0; i < v->m_current_size; i++) {
                        temp[i] = v->m_array[i];
                }
                delete[] v->m_array;
                v->m_capacity *= 2;
                v->m_array = temp;
        }
        v->m_array[v->m_current_size] = data;
        v->m_current_size++;
}

// function to delete last element
void vector_pop_back(vector* v)
{
        v->m_current_size--;
}

void vector_insert(vector* v, int index, int data)
{
    int arr_cont[v->m_current_size - index - 1];
    int length = v->m_capacity;
    int d = data;
        if (v->m_current_size == v->m_capacity) {
                int* temp = new int[2 * v->m_capacity];
                for (int i = 0; i < v->m_current_size; i++) {
                        temp[i] = v->m_array[i];
                }
                delete[] v->m_array;
                v->m_capacity *= 2;
                v->m_array = temp;
        }
        for(int j = 0; j < (length - index); j++)
        {
            arr_cont[j] = v->m_array[index + j + 1];
        }
        printf("data = %d\n", data);
        v->m_array[index] = data;
        printf("m_array[index] = %d\n", v->m_array[index]);
        length = v->m_capacity - index;
        for(int i = 0; i < length; i++)
        {
            v->m_array[index + i] = arr_cont[i];
        }
}

void vector_remove(vector* v, int index)
{
    int arr_cont[v->m_current_size - index - 1];
    int length = v->m_current_size - 1;
    
    for(int j = 0; j < (length - index + 1); j++)
        {
            arr_cont[j] = v->m_array[index + j + 1];
        }
        length = v->m_capacity - index - 1;
        for(int i = 0; i < length; i++)
        {
            v->m_array[index + i] = arr_cont[i];
        }
        v->m_current_size--;
}

void vector_set_element(vector* v, int index, int data)
{
        // TODO
}

// function to extract element at any index
int vector_get_element_by_index(vector* v, int index)
{
        if (index >= 0 && index < v->m_current_size) {
                return v->m_array[index];
        }
        // TODO: THINK
}

// function to get size of the vector
int vector_size(vector* v)
{
        return v->m_current_size;
}

// function to get capacity of the vector
int vector_capacity(vector* v)
{
        return v->m_capacity;
}

// function to print array elements
void vector_print(vector* v)
{
        for (int i = 0; i < v->m_current_size; i++) {
                printf("%d ", v->m_array[i]);
        }
        printf("\n");
}

int main()
{
    int data = 10;
        vector v;
        vector_init(&v);
        vector_push_back(&v, 10);
        vector_push_back(&v, 20);
        vector_push_back(&v, 30);
        vector_push_back(&v, 40);
        vector_push_back(&v, 50);
        vector_insert(&v,3,20);
        //vector_remove(&v,2);
        printf("Vector size : %d\n", vector_size(&v));
        printf("Vector capacity : %d\n", vector_capacity(&v));
        printf("Vector elements : ");
        vector_print(&v);
        vector_pop_back(&v);
        printf("After deleting last element\n");
        printf("Vector size : %d\n", vector_size(&v));
        printf("Vector capacity : %d\n", vector_capacity(&v));
        printf("Vector elements : ");
        vector_print(&v);
        return 0;
}

