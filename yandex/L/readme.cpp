<div class="problem__statement text" data-bem="{&quot;problem__statement&quot;:{}}">
<div class="problem-statement">
   <div class="header">
      <h1 class="title">L. Минимум на отрезке</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>0.5&nbsp;секунд</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>256Mb</td>
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
         <p>Рассмотрим последовательность целых чисел длины <span class="tex-math-text">N</span>. По ней с шагом <span class="tex-math-text">1</span> двигается «окно» длины <span class="tex-math-text">K</span>, то есть сначала в «окне» видно первые <span class="tex-math-text">K</span> чисел, на следующем шаге в «окне» уже будут находиться <span class="tex-math-text">K</span> чисел, начиная со второго, и так далее до конца последовательности. Требуется для каждого положения «окна» определить минимум в нём.
         </p></span></div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>В первой строке входных данных содержатся два числа <span class="tex-math-text">N</span> и <span class="tex-math-text">K</span> (<span class="tex-math-text">1 ≤  N ≤  150000</span>, <span class="tex-math-text">1 ≤ K ≤ 10000</span>, <span class="tex-math-text">K ≤  N</span>) – длины последовательности и «окна», соответственно. На следующей строке находятся <span class="tex-math-text">N</span> чисел – сама последовательность. Числа последовательности не превосходят по модулю <span class="tex-math-text">10<sup>5</sup></span>.
         </p></span></div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Выходые данные должны содержать <span class="tex-math-text">N - K + 1</span> строк – минимумы для каждого положения «окна».
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
            <td><pre>7 3
1 3 2 4 5 3 1
</pre></td>
            <td><pre>1 2 2 3 1 </pre></td>
         </tr>
      </tbody>
   </table>
</div><a class="link link_theme_download inline-block" href="/contest/35179/download/L/" target="_blank">Скачать условие задачи</a></div>