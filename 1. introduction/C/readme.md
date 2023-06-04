<div class="problem-statement">
   <div class="header">
      <h1 class="title">C. Конфигурационный файл</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>1&nbsp;секунда</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>64Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend"><span style="">
         <p>Вадим разрабатывает парсер конфигурационных файлов для своего проекта. Файл состоит из блоков, которые выделяются с помощью
            символов «<span class="tex-monospace">{</span>»&nbsp;— начало блока, и «<span class="tex-monospace">}</span>»&nbsp;— конец блока. Блоки могут вкладываться друг в друга. В один блок может быть вложено несколько других блоков.
         </p></span><p>В конфигурационном файле встречаются переменные. Каждая переменная имеет имя, которое состоит из не более чем десяти строчных
         букв латинского алфавита. Переменным можно присваивать числовые значения. Изначально все переменные имеют значение <span class="tex-math-text">0</span>. 
      </p>
      <p>Присваивание нового значения записывается как <span class="tex-monospace">&lt;variable&gt;=&lt;number&gt;</span>, где <span class="tex-monospace">&lt;variable&gt;</span>&nbsp;— имя переменной, а <span class="tex-monospace">&lt;number&gt;</span>&nbsp;— целое число, по модулю не превосходящее <span class="tex-math-text">10<sup>9</sup></span>. Парсер читает конфигурационный файл построчно. Как только он встречает выражение присваивания, он присваивает новое значение
         переменной. Это значение сохраняется до конца текущего блока, а затем восстанавливается старое значение переменной. Если в
         блок вложены другие блоки, то внутри тех из них, которые идут после присваивания, значение переменной также будет новым.
      </p>
      <p>Кроме того, в конфигурационном файле можно присваивать переменной значение другой переменной. Это действие записывается как
         <span class="tex-monospace">&lt;variable1&gt;=&lt;variable2&gt;</span>. Прочитав такую строку, парсер присваивает текущее значение переменной <span class="tex-monospace">variable2</span> переменной <span class="tex-monospace">variable1</span>. Как и в случае присваивания константного значения, новое значение сохраняется только до конца текущего блока. После окончания
         блока переменной возвращается значение, которое было перед началом блока.
      </p>
      <p>Для отладки Вадим хочет напечатать присваиваемое значение для каждой строки вида <span class="tex-monospace">&lt;variable1&gt;=&lt;variable2&gt;</span>. Помогите ему отладить парсер.
      </p>
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>Входные данные содержат хотя бы одну и не более <span class="tex-math-text">10<sup>5</sup></span> строк. Каждая строка имеет один из четырех типов: 
            </p><ul>
               <li><span class="tex-monospace">{</span>&nbsp;— начало блока; 
               </li>
               <li><span class="tex-monospace">}</span>&nbsp;— конец блока; 
               </li>
               <li><span class="tex-monospace">&lt;variable&gt;=&lt;number&gt;</span>&nbsp;— присваивание переменной значения, заданного числом; 
               </li>
               <li><span class="tex-monospace">&lt;variable1&gt;=&lt;variable2&gt;</span>&nbsp;— присваивание одной переменной значения другой переменной. Переменные <span class="tex-monospace">&lt;variable1&gt;</span> и <span class="tex-monospace">&lt;variable2&gt;</span> могут совпадать. 
               </li>
            </ul>
         <p></p></span><p>Гарантируется, что ввод является корректным и соответствует описанию из условия. Ввод не содержит пробелов.</p>
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Для каждой строки типа <span class="tex-monospace">&lt;variable1&gt;=&lt;variable2&gt;</span> выведите значение, которое было присвоено.
         </p></span></div>
   <h2>Пример</h2>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать ввод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать ввод"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать вывод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать вывод"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>a=b
b=123
var=b
b=-34
{
c=b
b=1000000000
d=b
{
a=b
e=var
}
}
b=b
</pre></td>
            <td><pre>0
123
-34
1000000000
1000000000
123
-34
</pre></td>
         </tr>
      </tbody>
   </table>
</div>
