<div class="problem__statement text" data-bem="{&quot;problem__statement&quot;:{}}">
<div class="problem-statement">
   <div class="header">
      <h1 class="title">H. Магазин</h1>
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
            <td colspan="1">стандартный ввод или shop.in</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или shop.out</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend"><span style="">
         <p>У Билла большая семья: трое сыновей, девять внуков. И всех надо кормить. Поэтому Билл раз в неделю ходит в магазин.</p></span><p>Однажды Билл пришел в магазин и увидел, что в магазине проводится акция под названием «каждый <span class="tex-math-text">k</span>-й товар бесплатно». Изучив правила акции, Билл выяснил следующее. Пробив на кассе товары, покупатель получает чек. Пусть в чеке <span class="tex-math-text">n</span> товаров, тогда <span class="tex-math-text">n/k</span> округленное вниз самых дешевых из них достаются бесплатно. 
      </p>
      <p>Например, если в чеке пять товаров за 200, 100, 1000, 400 и 100 рублей, соответственно, и <span class="tex-math-text">k = 2</span>, то бесплатно достаются оба товара по 100 рублей, всего покупатель должен заплатить 1600 рублей.
      </p>
      <p>Билл уже выбрал товары, и направился к кассе, когда сообразил, что товары, которые он хочет купить, можно разбить на несколько
         чеков, и благодаря этому потратить меньше денег.
      </p>
      <p>Помогите Биллу выяснить, какую минимальную сумму он сможет заплатить за выбранные товары, возможно разбив их на несколько
         чеков. 
      </p>
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>Первая строка входного файла содержит два целых числа <span class="tex-math-text">n</span>, <span class="tex-math-text">k</span> (<span class="tex-math-text">1 ≤ n ≤ 100 000</span>, <span class="tex-math-text">2 ≤ k ≤ 100</span>)&nbsp;— количество товаров, которые хочет купит Билл и параметр акции «каждый <span class="tex-math-text">k</span>-й товар бесплатно».
         </p></span><p>Следующая строка содержит <span class="tex-math-text">n</span> целых чисел <span class="tex-math-text">a<sub>i</sub></span> (<span class="tex-math-text">1 ≤ a<sub>i</sub> ≤ 10 000</span>)&nbsp;— цены товаров, которые покупает Билл.
      </p>
   </div>
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
            <td><pre>5 2
200 100 1000 400 100
</pre></td>
            <td><pre>1300
</pre></td>
         </tr>
      </tbody>
   </table>
</div></div>