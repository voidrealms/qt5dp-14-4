#ifndef BLA_H
#define BLA_H

#ifdef Q_OS_WIN
#define MY_EXPORT __declspec(dllexport)
#else
#define MY_EXPORT
#endif

#endif // BLA_H
