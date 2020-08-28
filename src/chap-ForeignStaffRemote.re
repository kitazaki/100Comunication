= TOEIC330点の僕でも外国人にリモートワーク環境の導入ができました！　という話

かんたんに結論だけいうと準備が９割５分だよね　という話になります。

== そもそもの話

タイトルがダサダサのダサなので名前は伏せます。伏せさせてください…　m(_ _)m

2013年にうっかり、当時付き合っていた彼女（現在の妻）の誘いで、TOEICの試験を受けたのですが、英語が得意でなかった私はなんと330点を叩き出してしまったのでした！（ががーん！）

その後、更にうっかり外国人が4割ぐらいいる会社に転職してしまったのですが、昨今のコロナ禍により、会社のオーナー社長から「全員リモートワークできるようにしてね！」という鶴の一声が。

さあ、どうなる俺！

== その時にやらないとだめだったこと

社内の全スタッフにリモートワーク環境を展開しないと駄目だったのですが、一つ大きなネックがありました。

それは「各々が個人のマシンにリモートワークの為のクライアント環境を導入してもらい、自ら職場の自分のPCに対してリモート接続設定をして貰う必要がある」ということです。
会社のPC側に設定するサーバソフトウェア環境は私が手を動かせばどうとでもなるのですけどね…。

さらに具合の悪いことに、リモートワークにつかったソフトウェアの解説は、公式提供されているのは日本語のみ。

日本人スタッフであれば、別に説明してもなんとかなりますし、ある程度自分でもどうにかなるでしょうが、
弊社の外国人スタッフは大分変わっていて…　というか甘やかされた環境にいる感じで、
社内の日本人スタッフはだいたい英語ができてしまうので、良くも悪くも日本語がわからない！(笑)

（そもそも私はIT専属だし英語わからなくても社内の人を通訳に使えばいいでしょうという話で、英語能力は一切求められずに入社しています…　多分会社で一番英語はできない。間違いない。）

また、タイミングとしては令和２年の２月頃、特別対策措置法の変更が話として出てきた頃に対応を着手したのですが、
社内クラスターが発生する　もしくは　出勤が推奨されない状況になるまでの短い期間で、
リモートワーク環境を整えきる必要が出てきました。（当然ですがついていけない人が残ってしまうような状況になりうると厳しいわけです。）

このため、５０名近くの外国人スタッフに急遽、私が直接リモートワークの接続手順をレクチャーし、１００％完遂させる必要が出てきたのでした。
（当然ながら、日本人スタッフも含めると１００名超えでした。）

== で、何したん？という話

色々導入手順についての検討の結果、実際にやった手順を簡単にまとめると

 * 何人か検証ユーザを決めて運用テスト
 * その知見から導入マニュアル（サーバ側、クライアント側）作成
 * サーバ側マニュアルを使って更に導入検証してみる
 * クライアント側マニュアルを使って、導入手順を説明してみる
 * ユーザがクライアント側マニュアルに従って、導入してテストしてみる

という流れになります。

このため、まずは最優先でマニュアルを作成しました。（GUIの動きベースで明記し、丁寧に記載）

その後、社内の翻訳担当者にマニュアル翻訳を依頼。
それと平行して本番のユーザ環境でリモート接続のテスト運用も行ってもらいました。

また併せて、外国人スタッフのリーダーに依頼し、「私がリモートワーク環境の準備と説明をしにくるよ」という内容を周知してもらいました。
（※最初に目的感をすり合わせておいたおかげで、各スタッフへの話の入りが非常にやりやすくなりました。ゴールメイキングは超大事ですね！）

最後は個々人のPCに導入を行い、その後クライアントソフトからの通信疎通を確認、
正常に動作することを確認した上でリモートワークのクライアント導入手順をマニュアルを使いながら、丁寧に一人一人に落とし込んでいきました。

また、今更言うまでもない事ですが、コンピュータ関連の用語の大半は英語がルーツなので、発音に気をつけながら
（普段、業務でつかっているキーワード）英語とマニュアルを使って説明したところ、ある程度ちゃんと理解してもらえたようでした。

※　結局リモート環境の以降に失敗して使えなかったメンバーは出てこなかったため、うまく行ったんだろうなぁと思っています。

※　英語に関してはほぼほぼBASICの構文に寄せて話をしました。　多分伝わるやろて・・・　と思ってやってました…
　うまくいったので多分伝わってるはず！


なお、実はここらへんの具体的な技術に関する知見は、既出の親方Projectの合同誌「Onestop オンライン生活」の２章に既にアウトプット済みです！（ばばーん！）

よかったらこっちもぜひ買ってね！



== TOEIC330点の僕にでも外国人スタッフへの100%リモートワーク導入ができた理由を考える

まず、なんといってもこの２点が大きかったと思います。

 * ゴールをちゃんと真っ先に共有した
 * ちゃんと中学生ぐらいでもわかりそうな解説粒度のマニュアルを作成し、その上で翻訳スタッフにより翻訳マニュアルを構築してもらった事が外国人スタッフの理解に大きく貢献した

更にこんな要因も大きかったような気がします。

 * リモートワークを外国人スタッフがやりたがっていたので率先して対応してくれる雰囲気があった
 * やりたい事は単純なので、その点についてまず外国人スタッフと共有し、ゴールを明確にできた
 * わかりにくいポイントについては、蛍光マーカーを使ってポイントをマークしながら図示し、１度の流れで理解してもらえるように指導できた（※PCのID入れる箇所とか、パスワード入れる箇所とか。）
 * 全体に向けて一括で説明すると絶対ついてこれない人が出てくるので、基本的にはマンツーマン（多くてもMAX２人同時）の説明となるように進めたのが効いた

結局これらの準備がうまく噛み合い、３月中旬ごろにはリモート環境が敷かれきった状況にもっていけたのでした。

== おわりに

思った以上に外国人への説明がしにくく、かなりの難しさではあったのですが、結果としては非常にうまくいったので、
入念に準備をしてやってみたら意外になんとかなるものだなぁ　という学びを得ました。

やってみるのは非常に大変でしたが、今回いろいろ苦労したおかげで、簡単な英語で最低限の意思疎通は取れるようになったので、１つステップを上がれたような気がします。

もう一度あったらやりたいか？といわれるとあんまり乗り気はしないのですが…(笑)

英語は勉強して使えるようにしとかないとなぁというのは改めて痛感させられました。
地道にがんばります…

