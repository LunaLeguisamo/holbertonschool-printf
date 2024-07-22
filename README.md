  <h1>_printf</h1>

  <div class="section">
    <h2>Description</h2>
    <p>_printf is a simplified implementation of the C standard library function `printf`, which prints formatted output to the standard output stream (`stdout`). It supports format specifiers such as `%c`, `%s`, `%d`, `%i`, and `%%`.</p>
  </div>

  <div class="section">
    <h2>Function Prototypes</h2>
    <pre><code>int _printf(const char *format, ...);</code></pre>
  </div>

  <div class="section">
    <h2>Parameters</h2>
    <ul>
      <li><code>format</code>: A pointer to a null-terminated string that contains the format control string.</li>
      <li><code>...</code>: Additional arguments that correspond to the format specifiers in the <code>format</code> string.</li>
    </ul>
  </div>

  <div class="section">
    <h2>Return Value</h2>
    <p>Returns the number of characters printed (excluding the null byte) on success. Returns <code>-1</code> on error.</p>
  </div>

  <div class="section">
    <h2>Supported Format Specifiers</h2>
    <ul>
      <li><code>%c</code>: Character</li>
      <li><code>%s</code>: String</li>
      <li><code>%d</code> or <code>%i</code>: Integer</li>
      <li><code>%%</code>: Literal '%' character</li>
    </ul>
  </div>

  <div class="section">
    <h2>Usage Example</h2>
    <pre><code>#include &lt;stdio.h&gt;
#include "main.h"

int main() {
    int num = 987;
    char ch = 'A';
    char *str = "Hello, World!";

    _printf("Character: %c\n", ch);         // Output: Character: A
    _printf("String: %s\n", str);           // Output: String: Hello, World!
    _printf("Integer: %d\n", num);          // Output: Integer: 987
    _printf("Percent sign: %%\n");          // Output: Percent sign: %

    return 0;
}
</code></pre>
  </div>

  <div class="section">
    <h2>Notes</h2>
    <ul>
      <li>_printf does not handle all the complexities and features of the standard <code>printf</code> function.</li>
      <li>Ensure the format string <code>format</code> and its corresponding arguments (<code>...</code>) match correctly to prevent undefined behavior.</li>
    </ul>
  </div>

</body>
</html>
