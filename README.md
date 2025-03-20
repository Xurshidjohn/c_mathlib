# 📚 MathLibC - C Matematik Kutubxonasi

libmathlib - bu **C dasturlash tili uchun oddiy, lekin foydali matematik kutubxona**. Kutubxona asosiy arifmetik amallar, kvadrat ildiz, darajaga ko'tarish, va tub sonlarni tekshirish kabi funksiyalarni o'z ichiga oladi.

---

## ✨ Xususiyatlari
- ✅ Qo'shish, Ayirish, Ko'paytirish, Bo'lish
- 📐 Kvadrat ildizni hisoblash (`sqrt()`)
- 📏 Darajaga ko'tarish (`pow()`)
- 🔍 Tub sonni tekshirish (`is_prime()`)

---

## 🔨 O'rnatish

Kutubxonani kompilyatsiya qilish:
```bash
git clone https://github.com/Xurshidjohn/c_mathlib.git

```

## Ishlatish 💻

```bash
#include <stdio.h>
#include "lib/mathlib.h"
int main()
{
  printf("%d", pow(6, 6));
  printf("%d", subtract(6, 6));
  printf("%d", divide(6, 6));
  printf("%d", multiple(6, 6));
  printf("%d", add(6, 6));
  printf("%d", is_prime(6));
  printf("%lf", sqrt(6.0));
}

```

## Eslatma ‼

mathlib.h kutubxonasini math.h bilan birga include qilmang!

Misol!

```bash
#include <stdio.h>
#include "lib/mathlib.h"

// bu tog'ri!
	
```

```bash
#include <stdio.h>
#include <math.h>
#include "lib/mathlib.h"

// bu noto'g'ri

```