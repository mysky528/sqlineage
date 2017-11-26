#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <Python.h>

void initialize_fsm();
void push_ident(const char *ident);
void push_symbol(const char symbol);
void send_model(PyObject *callback);

#endif