#

Estruturar a interface Graphics, as classes Graphics3D e Graphics2D, bem como como usá-las em uma classe de aplicação. Vou supor que você tem uma classe chamada App que representa a aplicação e deseja adaptar a renderização 2D ou 3D com base na escolha do tipo de aplicação.

1. Graphics.h (Interface base):

```c++
#ifndef GRAPHICS_H
#define GRAPHICS_H

class Graphics {
public:
    virtual ~Graphics() {}
    virtual void Initialize() = 0;
    virtual void Render() = 0;
};

#endif

```

2. Graphics3D.h (Classe de renderização 3D):

```c++
#ifndef GRAPHICS3D_H
#define GRAPHICS3D_H

#include "Graphics.h"

class Graphics3D : public Graphics {
public:
    virtual void Initialize() override;
    virtual void Render() override;
};

#endif

```

3. Graphics2D.h (Classe de renderização 2D):

```c++
#ifndef GRAPHICS2D_H
#define GRAPHICS2D_H

#include "Graphics.h"

class Graphics2D : public Graphics {
public:
    virtual void Initialize() override;
    virtual void Render() override;
};

#endif

```

4. App.h (Exemplo de classe de aplicação):


```cpp
#ifndef APP_H
#define APP_H

#include "Graphics.h"

class App {
private:
    Graphics* graphics;

public:
    App(Graphics* graphics);
    void Run();
};

#endif
```
