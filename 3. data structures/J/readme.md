<div class="problem__statement text" data-bem="{&quot;problem__statement&quot;:{}}">
<div class="problem-statement">
   <div class="header">
      <h1 class="title">J. Гоблины и очереди</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>0.6&nbsp;секунд</td>
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
         <p>Гоблины Мглистых гор очень любях ходить к своим шаманам. Так как гоблинов много, к шаманам часто образуются очень длинные
            очереди. А поскольку много гоблинов в одном месте быстро образуют шумную толку, которая мешает шаманам проводить сложные медицинские
            манипуляции, последние решили установить некоторые правила касательно порядка в очереди. 
         </p></span><p>Обычные гоблины при посещении шаманов должны вставать в конец очереди. Привилегированные же гоблины, знающие особый пароль,
         встают ровно в ее середину, причем при нечетной длине очереди они встают сразу за центром. 
      </p>
      <p>Так как гоблины также широко известны своим непочтительным отношением ко всяческим правилам и законам, шаманы попросили вас
         написать программу, которая бы отслеживала порядок гоблинов в очереди.
      </p>
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>В первой строке входных данный записано число <span class="tex-math-text">N</span> <span class="tex-math-text">(1 ≤ N ≤ 10<sup>5</sup>)</span> <span class="tex-math-inline"><img class="tex-math" src="/testsys/tex/render/fi0=.png"></span> количество запросов. Следующие <span class="tex-math-text">N</span> строк содержат описание запросов в формате: 
            </p><ul>
               <li>+ <span class="tex-math-text">i</span> <span class="tex-math-inline"><img class="tex-math" src="/testsys/tex/render/fi0=.png"></span> гоблин с номером <span class="tex-math-text">i</span> <span class="tex-math-text">(1 ≤ i ≤ N)</span> встаёт в конец очереди. 
               </li>
               <li>* <span class="tex-math-text">i</span> <span class="tex-math-inline"><img class="tex-math" src="/testsys/tex/render/fi0=.png"></span> привилегированный гоблин с номером i встает в середину очереди. 
               </li>
               <li>- <span class="tex-math-inline"><img class="tex-math" src="/testsys/tex/render/fi0=.png"></span> первый гоблин из очереди уходит к шаманам. Гарантируется, что на момент такого запроса очередь не пуста. 
               </li>
            </ul>
         <p></p></span></div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Для каждого запроса типа - программа должна вывести номер гоблина, который должен зайти к шаманам.</p></span></div>
   <h3>Пример 1</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать ввод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать ввод"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem button_js_inited" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать вывод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать вывод"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>7
+ 1
+ 2
-
+ 3
+ 4
-
-
</pre></td>
            <td><pre>1
2
3
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 2</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать ввод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать ввод"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать вывод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать вывод"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>2
* 1
+ 2
</pre></td>
            <td><pre></pre></td>
         </tr>
      </tbody>
   </table>
</div><a class="link link_theme_download inline-block" href="/contest/35179/download/J/" target="_blank">Скачать условие задачи</a></div>