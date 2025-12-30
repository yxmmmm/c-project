#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "students.dat"

// 学生结构体
typedef struct Student {
    int id;                 // 学号
    char name[50];          // 姓名
    float math;             // 数学成绩
    float english;          // 英语成绩
    float computer;         // 计算机成绩
    float total;            // 总分
    float average;          // 平均分
    struct Student *next;
} Student;

// 全局变量：链表头指针
Student *head = NULL;

// 函数声明
void addStudent();
void deleteStudent();
void modifyStudent();
void searchStudent();
void displayAll();
void saveToFile();
void readFromFile();
void freeList();
void calculateScore(Student *s);
void displayMenu();

int main() {
    int choice;

    // 程序启动时读取文件
    readFromFile();

    while (1) {
        displayMenu();
        printf("请输入您的选择: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                deleteStudent();
                break;
            case 3:
                modifyStudent();
                break;
            case 4:
                searchStudent();
                break;
            case 5:
                displayAll();
                break;
            case 6:
                saveToFile();
                break;
            case 7:
                readFromFile();
                break;
            case 0:
                saveToFile();
                freeList();
                printf("感谢使用，再见！\n");
                exit(0);
            default:
                printf("无效的选择，请重新输入！\n");
        }
        printf("\n");
    }

    return 0;
}

// 显示菜单
void displayMenu() {
    printf("====================================\n");
    printf("    学生成绩管理系统\n");
    printf("====================================\n");
    printf("  1. 添加学生\n");
    printf("  2. 删除学生\n");
    printf("  3. 修改学生信息\n");
    printf("  4. 查询学生\n");
    printf("  5. 显示所有学生\n");
    printf("  6. 保存到文件\n");
    printf("  7. 从文件读取\n");
    printf("  0. 退出系统\n");
    printf("====================================\n");
}

// 计算总分和平均分
void calculateScore(Student *s) {
    s->total = s->math + s->english + s->computer;
    s->average = s->total / 3.0;
}

// 添加学生
void addStudent() {
    Student *newStudent = (Student *)malloc(sizeof(Student));
    if (newStudent == NULL) {
        printf("内存分配失败！\n");
        return;
    }

    printf("请输入学号: ");
    scanf("%d", &newStudent->id);

    // 检查学号是否已存在
    Student *p = head;
    while (p != NULL) {
        if (p->id == newStudent->id) {
            printf("该学号已存在！\n");
            free(newStudent);
            return;
        }
        p = p->next;
    }

    printf("请输入姓名: ");
    scanf("%s", newStudent->name);
    printf("请输入数学成绩: ");
    scanf("%f", &newStudent->math);
    printf("请输入英语成绩: ");
    scanf("%f", &newStudent->english);
    printf("请输入计算机成绩: ");
    scanf("%f", &newStudent->computer);

    calculateScore(newStudent);

    // 插入到链表头部
    newStudent->next = head;
    head = newStudent;

    printf("添加学生成功！\n");
}

// 删除学生
void deleteStudent() {
    int id;
    if (head == NULL) {
        printf("链表为空，没有学生可以删除！\n");
        return;
    }

    printf("请输入要删除的学号: ");
    scanf("%d", &id);

    Student *p = head, *prev = NULL;

    while (p != NULL && p->id != id) {
        prev = p;
        p = p->next;
    }

    if (p == NULL) {
        printf("未找到学号为 %d 的学生！\n", id);
        return;
    }

    if (prev == NULL) {
        head = p->next;
    } else {
        prev->next = p->next;
    }

    free(p);
    printf("删除学生成功！\n");
}

// 修改学生信息
void modifyStudent() {
    int id;
    if (head == NULL) {
        printf("链表为空，没有学生可以修改！\n");
        return;
    }

    printf("请输入要修改的学号: ");
    scanf("%d", &id);

    Student *p = head;
    while (p != NULL && p->id != id) {
        p = p->next;
    }

    if (p == NULL) {
        printf("未找到学号为 %d 的学生！\n", id);
        return;
    }

    printf("当前学生信息：\n");
    printf("姓名: %s, 数学: %.2f, 英语: %.2f, 计算机: %.2f\n",
           p->name, p->math, p->english, p->computer);

    printf("请输入新的姓名: ");
    scanf("%s", p->name);
    printf("请输入新的数学成绩: ");
    scanf("%f", &p->math);
    printf("请输入新的英语成绩: ");
    scanf("%f", &p->english);
    printf("请输入新的计算机成绩: ");
    scanf("%f", &p->computer);

    calculateScore(p);
    printf("修改学生信息成功！\n");
}

// 查询学生
void searchStudent() {
    int id;
    if (head == NULL) {
        printf("链表为空，没有学生可以查询！\n");
        return;
    }

    printf("请输入要查询的学号: ");
    scanf("%d", &id);

    Student *p = head;
    while (p != NULL && p->id != id) {
        p = p->next;
    }

    if (p == NULL) {
        printf("未找到学号为 %d 的学生！\n", id);
        return;
    }

    printf("\n========== 学生信息 ==========\n");
    printf("学号: %d\n", p->id);
    printf("姓名: %s\n", p->name);
    printf("数学: %.2f\n", p->math);
    printf("英语: %.2f\n", p->english);
    printf("计算机: %.2f\n", p->computer);
    printf("总分: %.2f\n", p->total);
    printf("平均分: %.2f\n", p->average);
    printf("================================\n");
}

// 显示所有学生
void displayAll() {
    if (head == NULL) {
        printf("链表为空，没有学生信息！\n");
        return;
    }

    printf("\n========== 所有学生信息 ==========\n");
    printf("学号\t姓名\t数学\t英语\t计算机\t总分\t平均分\n");
    printf("------------------------------------------------------------\n");

    Student *p = head;
    while (p != NULL) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
               p->id, p->name, p->math, p->english, p->computer, p->total, p->average);
        p = p->next;
    }
    printf("====================================\n");
}

// 保存到文件
void saveToFile() {
    FILE *fp = fopen(FILENAME, "wb");
    if (fp == NULL) {
        printf("无法打开文件！\n");
        return;
    }

    Student *p = head;
    int count = 0;

    while (p != NULL) {
        fwrite(p, sizeof(Student), 1, fp);
        count++;
        p = p->next;
    }

    fclose(fp);
    printf("成功保存 %d 条学生记录到文件 %s\n", count, FILENAME);
}

// 从文件读取
void readFromFile() {
    FILE *fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("文件不存在或无法打开，将从空链表开始\n");
        return;
    }

    // 释放现有链表
    freeList();

    Student temp;
    while (fread(&temp, sizeof(Student), 1, fp) == 1) {
        Student *newStudent = (Student *)malloc(sizeof(Student));
        if (newStudent == NULL) {
            printf("内存分配失败！\n");
            break;
        }

        *newStudent = temp;
        newStudent->next = head;
        head = newStudent;
    }

    fclose(fp);
    printf("成功从文件 %s 读取学生数据\n", FILENAME);
}

// 释放链表
void freeList() {
    Student *p = head;
    while (p != NULL) {
        Student *temp = p;
        p = p->next;
        free(temp);
    }
    head = NULL;
}
