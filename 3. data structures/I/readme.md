<div class="problem__statement text" data-bem="{&quot;problem__statement&quot;:{}}">
<div class="problem-statement">
   <div class="header">
      <h1 class="title">I. Машинки</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>1&nbsp;секунда</td>
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
         <p>Петя, которому три года, очень любит играть с машинками. Всего у Пети <span class="tex-math-text">N</span> различных машинок, которые хранятся на полке шкафа так высоко, что он сам не может до них дотянуться. Одновременно на полу
            комнаты может находиться не более <span class="tex-math-text">K</span> машинок. Петя играет с одной из машинок на полу и если он хочет поиграть с другой машинкой, которая также находится на полу,
            то дотягивается до нее сам. Если же машинка находится на полке, то он обращается за помощью к маме. Мама может достать для
            Пети машинку с полки и одновременно с этим поставить на полку любую машинку с пола. Мама очень хорошо знает своего ребенка
            и может предугадать последовательность, в которой Петя захочет играть с машинками. При этом, чтобы не мешать Петиной игре,
            она хочет совершить как можно меньше операций по подъему машинки с пола, каждый раз правильно выбирая машинку, которую следует
            убрать на полку. Ваша задача состоит в том, чтобы определить минимальное количество операций. Перед тем, как Петя начал играть,
            все машинки стоят на полке.
         </p></span></div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>В первой строке содержаться три числа <span class="tex-math-text">N</span>, <span class="tex-math-text">K</span> и <span class="tex-math-text">P</span> (<span class="tex-math-text">1≤ K, N ≤ 100000</span>, <span class="tex-math-text">1≤ P ≤ 500000</span>). В следующих <span class="tex-math-text">P</span> строках записаны номера машинок в том порядке, в котором Петя захочет играть с ними.
         </p></span></div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Выведите единственное число: минимальное количество операций, которое надо совершить Петиной маме.</p></span></div>
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
            <td><pre>3 2 7
1
2
3
1
3
1
2
</pre></td>
            <td><pre>4</pre></td>
         </tr>
      </tbody>
   </table>
   <h2>Примечания</h2>
   <div class="notes"><span style="">
         <p>В этой задаче можно использовать STL. </p></span><p>Пояснения к примеру: </p>
      <p>Операция 1: снять машинку 1 </p>
      <p>Операция 2: снять машинку 2 </p>
      <p>Операция 3: поднять машинку 2 и снять машинку 3 </p>
      <p>Операция 4: поднять машинку 3 или 1 и снять машинку 2</p>
   </div>
</div><a class="link link_theme_download inline-block" href="/contest/35179/download/I/" target="_blank">Скачать условие задачи</a></div>