#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - prints info about Python lists
 * @p: Python object (list)
 */
void print_python_list(PyObject *p)
{
	if (!PyList_Check(p))
	{
		PyErr_Print();
		return;
	}

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", PyList_Size(p));
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

	for (Py_ssize_t i = 0; i < PyList_Size(p); ++i)
	{
		printf("Element %ld: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
	}
}

/**
 * print_python_bytes - prints info about Python bytes objects
 * @p: Python object (bytes)
 */
void print_python_bytes(PyObject *p)
{
	if (!PyBytes_Check(p))
	{
		PyErr_Print();
		return;
	}

	printf("[.] bytes object info\n");
	printf("  size: %ld\n", PyBytes_Size(p));
	printf("  trying string: %s\n", PyBytes_AS_STRING(p));

	printf("  first %ld bytes:", PyBytes_Size(p) + 1 < 10 ? PyBytes_Size(p) + 1 : 10);

	for (Py_ssize_t i = 0; i < PyBytes_Size(p) + 1 && i < 10; ++i)
	{
		printf(" %02x", (unsigned char)PyBytes_AS_STRING(p)[i]);
	}
	printf("\n");
}
