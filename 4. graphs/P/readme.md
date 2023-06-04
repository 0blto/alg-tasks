<div class="problem__statement text" data-bem="{&quot;problem__statement&quot;:{}}">
<div class="problem-statement">
   <div class="header">
      <h1 class="title">P. Авиаперелёты</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>2&nbsp;секунды</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или avia.in</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или avia.out</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend"><span style="">
         <p>Главного конструктора Петю попросили разработать новую модель самолёта для компании «Air Бубундия». Оказалось, что самая сложная часть заключается в подборе оптимального размера топливного бака. </p></span><p>Главный картограф «Air Бубундия» Вася составил подробную карту Бубундии. На этой карте он отметил расход топлива для перелёта между каждой парой городов.
         
      </p>
      <p>Петя хочет сделать размер бака минимально возможным, для которого самолёт сможет долететь от любого города в любой другой
         (возможно, с дозаправками в пути).
      </p>
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>Первая строка входного файла содержит натуральное число <span class="tex-math-text">n</span>&nbsp;(<span class="tex-math-inline"><img class="tex-math" src="/testsys/tex/render/MSBcbGVxc2xhbnQgbiBcbGVxc2xhbnQgMVwsMDAw.png"></span>)&nbsp;— число городов в Бубундии. Далее идут <span class="tex-math-text">n</span> строк по <span class="tex-math-text">n</span> чисел каждая. <span class="tex-math-text">j</span>-е число в <span class="tex-math-text">i</span>-й строке равно расходу топлива при перелёте из <span class="tex-math-text">i</span>-го города в <span class="tex-math-text">j</span>-й. Все числа не меньше нуля и меньше <span class="tex-math-text">10<sup>9</sup></span>. Гарантируется, что для любого <span class="tex-math-text">i</span> в <span class="tex-math-text">i</span>-й строчке <span class="tex-math-text">i</span>-е число равно нулю.
         </p></span></div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Первая строка выходного файла должна содержать одно число&nbsp;— оптимальный размер бака.</p></span></div>
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
            <td><pre>4
0 10 12 16
11 0 8 9
10 13 0 22
13 10 17 0
</pre></td>
            <td><pre>10</pre></td>
         </tr>
      </tbody>
   </table>
</div><a class="link link_theme_download inline-block" href="/contest/35179/download/P/" target="_blank">Скачать условие задачи</a></div>