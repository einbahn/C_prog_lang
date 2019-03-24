void m_strcpy(char *s, char *t)
{
    while (*s++ = *t++)
        ;
}

int main()
{
    char p[] = "this is the time";
    char t[] = "that is also the time";

    m_strcpy(t, p);
}