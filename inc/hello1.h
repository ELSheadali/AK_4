// SPDX-License-Identifier: GPL-2-Clause
#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>
#include <linux/types.h>
#include <linux/slab.h>
#include <linux/ktime.h>

// Декларація функції print_hello
// Ця функція виводить "Hello, world!" та вимірює час виконання
// Параметр chrono_counter визначає, скільки разів викликати функцію
// Функція повертає 0 в разі успішного виклику, -EINVAL у випадку помилки
int print_hello(uint chrono_counter);

