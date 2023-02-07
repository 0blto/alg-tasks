<div class="problem-statement">
   <div class="header">
      <h1 class="title">A. Агроном-любитель</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>2&nbsp;секунды</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>64Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или agro.in</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или agro.out</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend"><span style="">
         <p>Городской школьник Лёша поехал на лето в деревню и занялся выращиванием цветов. Он посадил <span class="tex-math-text">n</span> цветков вдоль одной длинной прямой грядки, и они успешно выросли. Лёша посадил множество различных видов цветков, <span class="tex-math-text">i</span>-й от начала грядки цветок имеет вид <span class="tex-math-text">a<sub>i</sub></span>, где <span class="tex-math-text">a<sub>i</sub></span> "— целое число, номер соответствующего вида в «Каталоге юного агронома».
         </p></span><p>Теперь Лёша хочет сделать фотографию выращенных им цветов и выложить ее в раздел «мои грядки» в социальной сети для агрономов «ВКомпосте». На фотографии будет виден отрезок из одного или нескольких высаженных подряд цветков.</p>
      <p>Однако он заметил, что фотография смотрится не очень интересно, если на ней много одинаковых цветков подряд. Лёша решил, что
         если на фотографии будут видны три цветка одного вида, высаженные подряд, то его друзья — специалисты по эстетике цветочных фотографий — поставят мало лайков.
      </p>
      <p>Помогите ему выбрать для фотографирования как можно более длинный участок своей грядки, на котором нет трех цветков одного
         вида подряд. 
      </p>
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"><span style="">
         <p>В первой строке содержится целое число <span class="tex-math-text">n</span> (<span class="tex-math-text">1 ≤ n ≤ 200 000</span>) — количество цветов на грядке.
         </p></span><p>Во второй строке содержится <span class="tex-math-text">n</span> целых чисел <span class="tex-math-text">a<sub>i</sub></span> (<span class="tex-math-text">1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup></span>), обозначающих вид очередного цветка. Одинаковые цветки обозначаются одинаковыми числами, разные — разными.
      </p>
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"><span style="">
         <p>Выведите номер первого и последнего цветка на самом длинном искомом участке. Цветки нумерются от 1 до <span class="tex-math-text">n</span>.
         </p></span><p>Если самых длинных участков несколько, выведите участок, который начинается раньше. </p>
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
            <td><pre>6
5 6 6 6 23 9
</pre></td>
            <td><pre>3 6
</pre></td>
         </tr>
      </tbody>
   </table>
</div>
