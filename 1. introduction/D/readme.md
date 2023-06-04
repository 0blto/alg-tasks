<div class="problem-statement">
   <div class="header">
      <h1 class="title">D. Профессор Хаос</h1>
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
            <td colspan="1">стандартный ввод или chaos.in</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или chaos.out</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend"><span style="">
         <p>В секретной лаборатории профессора Хаоса проходит эксперимент по выращиванию особо опасных бактерий. В начале первого дня
            эксперимента у Хаоса имеется <span class="tex-math-text">a</span> особо опасных бактерий.
         </p></span><p>Каждый день эксперимента устроен следующим образом. Рано утром профессор достает из контейнера все свои бактерии и помещает
         их в инкубатор, где бактерии начинают делиться. Вместо каждой бактерии образуется <span class="tex-math-text">b</span> новых бактерий. 
      </p>
      <p>После извлечения бактерий из инкубатора <span class="tex-math-text">c</span> из них используются для проведения различных опытов и затем уничтожаются. Если после извлечения из инкубатора имеется менее
         <span class="tex-math-text">c</span> бактерий, для проведения опытов используются все имеющиеся бактерии, и эксперимент заканчивается. 
      </p>
      <p>Оставшиеся бактерии в конце дня необходимо поместить в контейнер и продолжить использовать в эксперименте. Однако в контейнер
         можно поместить не более <span class="tex-math-text">d</span> бактерий, поэтому если число оставшихся бактерий больше <span class="tex-math-text">d</span>, то в контейнер помещаются <span class="tex-math-text">d</span> бактерий, а остальные уничтожаются.
      </p>
      <p>Теперь профессор Хаос хочет выяснить, сколько особо опасных бактерий будет у него в контейнере после <span class="tex-math-text">k</span>-го дня эксперимента. Помогите ему найти ответ на этот вопрос.
      </p>
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>В единственной строке входного файла содержится пять целых чисел <span class="tex-math-text">a</span>, <span class="tex-math-text">b</span>, <span class="tex-math-text">c</span>, <span class="tex-math-text">d</span> и <span class="tex-math-text">k</span> (<span class="tex-math-text">1 ≤ a, b ≤ 1000</span>, <span class="tex-math-text">0 ≤ c ≤ 1000</span>, <span class="tex-math-text">1 ≤ d ≤ 1000</span>, <span class="tex-math-text">a ≤ d</span>, <span class="tex-math-text">1 ≤ k ≤ 10<sup>18</sup></span>).
         </p></span></div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Выведите одно число&nbsp;— количество бактерий у Хаоса к концу <span class="tex-math-text">k</span>-го дня. Если эксперимент завершится в <span class="tex-math-text">k</span>-й день или ранее, выведите число 0.
         </p></span></div>
   <h3>Пример 1</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать ввод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать ввод"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать вывод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать вывод"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>1 3 1 5 2
</pre></td>
            <td><pre>5
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
            <td><pre>1 2 0 4 3
</pre></td>
            <td><pre>4
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 3</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_input i-bem" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать ввод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать ввод"></span></button></div></th>
            <th>Вывод<div class="problem__copy-sample"><button class="button button_theme_pseudo button_size_s button_only-icon_yes problem__copy-button problem__copy-button_type_output i-bem button_js_inited" data-bem="{&quot;button&quot;:{}}" role="button" type="button" title="Скопировать вывод"><span class="button__text">&nbsp;<img class="image button__icon button__icon_role_copy" src="//yastatic.net/lego/_/La6qi18Z8LwgnZdsAr1qy1GwCwo.gif" alt="Скопировать вывод"></span></button></div></th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>1 2 3 5 2
</pre></td>
            <td><pre>0
</pre></td>
         </tr>
      </tbody>
   </table>
</div>
