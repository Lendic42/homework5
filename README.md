
flowchart TD
    A["int main()"] --> B["double x, a, b, F;<br/>double pi = 3.1415926535;"]
    B --> C["scanf(&quot;%lf&quot;, &amp;x);"]
    C --> D["a = sin(3 * pi - 2 * x);"]
    D --> E["b = cos(5 * pi + 2 * x);"]
    E --> F["F = 1.0 / 4.0 * a * a * b * b;"]
    F --> G["printf(&quot;%lf\n&quot;, F);"]
    G --> H["return 0;"]