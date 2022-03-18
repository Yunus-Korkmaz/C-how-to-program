/*
	Name:		  Random Sentences
	Author:       Yunus Korkmaz
	Date:
	Description:  Write a program that uses random number generation to create sentences. 
					The program should use four arrays of pointers to char called article, noun, verb and preposition.
					The program should create a sentence by selecting a word at random from each array in
					the following order: article, noun, verb, preposition, article and noun. As each word is picked,
					it should be concatenated to the previous words in an array large enough to hold the entire sentence.
					The words should be separated by spaces. When the final sentence is output, it should start with a
					capital letter and end with a period. The program should generate 20 such sentences. The arrays
					should be filled as follows: The article array should contain the articles "the", "a", "one", "some"
					and "any"; the noun array should contain the nouns "boy", "girl", "dog", "town" and "car"; the
					verb array should contain the verbs "drove", "jumped", "ran", "walked" and "skipped"; the preposition 
					array should contain the prepositions "to", "from", "over", "under" and "on". 
					After the preceding program is written and working, modify it to produce a short story consisting of several of these sentences.
					(How about the possibility of a random term paper writer?)
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(void){
	
	srand(time(NULL));
	
	
	
	const char *article[]={"5","the", "a", "one", "some","any"};
	const char *noun[]={"700","Ability","Access","Accident","Account","Act","Action","Activity","Actor","Ad","Addition","Address",
				"Administration","Advantage","Advertising","Advice","Affair","Age","Agency","Agreement","Air","Airport","Alcohol","Ambition",
				"Amount","Analysis","Analyst","Animal","Answer","Anxiety","Apartment","Appearance","Apple","Application","Appointment","Area",
				"Argument","Army","Arrival","Art","Article","Aspect","Assignment","Assistance","Assistant","Association","Assumption","Atmosphere",
				"Attempt","Attention","Attitude","Audience","Aunt","Average","Awareness","Back","Bad","Balance","Ball","Bank","Baseball","Basis",
				"Basket","Bath","Bathroom","Bedroom","Beer","Beginning","Benefit","Bird","Birth","Birthday","Bit","Blood","Board","Boat","Body",
				"Bonus","Book","Boss","Bottom","Box","Boy","Boyfriend","Bread","Breath","Brother","Building","Bus","Business","Buyer","Cabinet",
				"Camera","Cancer","Candidate","Capital","Car","Card","Care","Career","Case","Cash","Cat","Category","Cause","Celebration","Cell",
				"Championship","Chance","Chapter","Charity","Cheek","Chemistry","Chest","Chicken","Child","Childhood","Chocolate","Choice",
				"Church","Cigarette","City","Class","Classroom","Client","Climate","Clothes","Coast","Coffee","Collection","College",
				"Combination","Committee","Communication","Community","Company","Comparison","Competition","Complaint","Computer",
				"Concept","Conclusion","Condition","Confusion","Connection","Consequence","Construction","Contact","Context","Contract",
				"Contribution","Control","Conversation","Cookie","Country","County","Courage","Course","Cousin","Craft","Credit","Criticism",
				"Culture","Currency","Customer","Cycle","Dad","Data","Database","Date","Day","Dealer","Death","Debt","Decision","Definition",
				"Delivery","Demand","Department","Departure","Depression","Depth","Description","Design","Desk","Development","Device","Diamond",
				"Difference","Difficulty","Dinner","Direction","Director","Dirt","Disaster","Discipline","Discussion","Disease","Disk","Distribution",
				"Dog","Drama","Drawer","Drawing","Driver","Ear","Earth","Economics","Economy","Editor","Education","Effect","Efficiency","Effort","Egg",
				"Election","Elevator","Emotion","Emphasis","Employee","Employer","Employment","End","Energy","Engine","Entertainment","Enthusiasm",
				"Entry","Environment","Equipment","Error","Establishment","Estate","Event","Exam","Examination","Example","Exchange","Excitement",
				"Exercise","Experience","Explanation","Expression","Extent","Eye","Face","Fact","Failure","Family","Farmer","Fat","Feature","Feedback",
				"Field","Figure","Film","Finding","Fire","Fish","Flight","Focus","Food","Football","Force","Form","Fortune","Foundation","Frame","Freedom",
				"Friendship","Fun","Funeral","Future","Game","Garbage","Garden","Gate","Gene","Gift","Girl","Girlfriend","Goal","Government","Grandmother",
				"Grocery","Group","Growth","Guest","Guidance","Guide","Guitar","Hair","Half","Hall","Hand","Hat","Head","Health","Hearing","Heart","Heat",
				"Height","Highway","Historian","History","Home","Homework","Honey","Hope","Hospital","Hotel","House","Housing","Ice","Idea","Image","Imagination",
				"Impact","Importance","Impression","Improvement","Income","Independence","Indication","Industry","Inflation","Information","Initiative","Injury",
				"Insect","Inside","Inspection","Inspector","Instance","Instruction","Insurance","Intention","Interaction","Interest","Internet","Introduction",
				"Investment","Issue","Item","Job","Judgment","Key","Kind","King","Knowledge","Lab","Ladder","Lady","Lake","Language","Law","Leader","Leadership",
				"Length","Level","Library","Life","Light","Line","Link","List","Literature","Location","Loss","Love","Machine","Magazine","Maintenance","Mall",
				"Man","Management","Manager","Manufacturer","Map","Market","Marketing","Marriage","Material","Math","Matter","Meal","Meaning","Measurement","Meat",
				"Media","Medicine","Medium","Member","Membership","Memory","Menu","Message","Metal","Method","Midnight","Mind","Mixture","Mode","Model","Mom",
				"Moment","Money","Month","Mood","Morning","Mouse","Movie","Mud","Music","Name","Nation","Nature","Negotiation","Network","News","Newspaper","Night",
				"Note","Nothing","Number","Object","Obligation","Office","Oil","Operation","Opinion","Opportunity","Orange","Order","Organization","Outcome",
				"Outside","Oven","Owner","Page","Paint","Painting","Paper","Part","Passenger","Passion","Patience","Payment","Penalty","People","Percentage",
				"Perception","Performance","Period","Permission","Person","Personality","Perspective","Philosophy","Phone","Photo","Physics","Piano","Picture",
				"Pie","Piece","Pizza","Place","Plan","Platform","Player","Poem","Poet","Poetry","Point","Police","Policy","Politics","Pollution","Population",
				"Position","Possession","Possibility","Post","Pot","Potato","Power","Practice","Preference","Preparation","Presence","Presentation","President",
				"Pressure","Price","Priority","Problem","Procedure","Process","Product","Profession","Professor","Profit","Program","Promotion","Property",
				"Proposal","Protection","Psychology","Purpose","Quality","Quantity","Queen","Question","Radio","Range","Rate","Ratio","Reaction","Reality",
				"Reason","Reception","Recipe","Recognition","Recommendation","Record","Recording","Reflection","Refrigerator","Region","Relation","Relationship",
				"Replacement","Republic","Reputation","Requirement","Research","Resolution","Resource","Response","Responsibility","Restaurant","Result","Revenue",
				"Review","Revolution","Risk","River","Road","Rock","Role","Room","Rule","Safety","Salad","Salt","Sample","Satisfaction","Scale","Scene","School",
				"Science","Screen","Secretary","Section","Sector","Security","Selection","Sense","Series","Service","Session","Setting","Shape","Share","Shirt","Side",
				"Sign","Signature","Significance","Singer","Sir","Sister","Site","Situation","Size","Skill","Society","Software","Soil","Solution","Son","Song",
				"Sound","Soup","Source","Space","Speaker","Speech","Sport","Square","Standard","Star","State","Statement","Steak","Step","Stock","Storage","Store",
				"Story","Stranger","Strategy","Stress","Structure","Student","Studio","Study","Style","Subject","Success","Suggestion","Sun","Supermarket","Surgery",
				"Sympathy","System","Table","Tale","Task","Tax","Tea","Teacher","Technology","Television","Temperature","Tennis","Tension","Term","Test","Thanks",
				"Theory","Thing","Thought","Throat","Time","Tongue","Tool","Tooth","Top","Topic","Town","Trade","Tradition","Trainer","Training","Transportation",
				"Truth","Two","Type","Uncle","Understanding","Union","Unit","University","User","Value","Variation","Variety","Vehicle","Version","Video","View",
				"Village","Virus","Voice","Volume","War","Warning","Water","Way","Weakness","Wealth","Weather","Web","Wedding","Week","While","Wife","Wind",
				"Winner","Woman","Wood","Word","Work","Worker","World","Writer","Writing","Year","Youth"};
	
	const char *verb[]={"200","Accept","Care","Achieve","Carry","Admit","Catch","Affect","Cause","Afford","Change","Agree","Check","Allow","Choose","Answer","Clear","Apply",
				"Clean","Argue","Collect","Arrange","Come","Arrive","Complain","Ask","Complete","Avoid","Consist","Become","Contain","Begin","Continue","Believe",
				"Contribute","Build","Control","Buy","Correct","Call","Cost","Could","Enjoy","Create","Exist","Cross","Expect","Cut","Experience","Damage","Explain",
				"Deal","Express","Deliver","Face","Deny","Fall","Depend","Feel","Describe","Find","Destroy","Finish","Develop","Fly","Disappear","Follow","Discover",
				"Forget","Do","Forgive","Dress","Form","Drink","Get","Drive","Give","Eat","Go","Encourage","Grow","Happen","Learn","Have","Leave","Hear","Lend","Help",
				"Like","Hide","Limit","Hold","Listen","Hope","Live","Identity","Look","Imagine","Love","Improve","Make","Increase","Matter","Influence","Mean","Inform",
				"Measure","Invite","Meet","Involve","Mention","Join","Mind","Keep","Move","Know","Must","Last","Need","Laugh","Offer","Open","Regard","Order","Relate",
				"Own","Release","Pay","Remember","Perform","Remove","Play","Repeat","Point","Replace","Prefer","Reply","Prepare","Report","Press","Result","Prevent",
				"Return","Produce","Reveal","Protect","Rise","Provide","Run","Push","Save","Reach","Say","Read","See","Receive","Sell","Record","Send","Reduce","Set",
				"Share","Tell","Shoot","Tend","Show","Think","Sing","Throw","Sit","Touch","Sleep","Train","Smile","Travel","Sound","Treat","Speak","Try","Stand","Turn",
				"Start","Understand","State","Use","Study","Visit","Succeed","Wait","Suggest","Want","Supply","Walk","Suppose","Watch","Survive","Win","Take","Wonder",
				"Talk","Write"};
				
	const char *preposition[]={"68","aboard","about","above","across","after","against","along","amid","among","around","as","at","before","behind","below","beneath","beside",
				"between","beyond","but","by","concerning","considering","despite","down","during","except","following","for","from","in","inside","into","like","minus",
				"near","next","of","off","on","onto","opposite","out","outside","over","past","per","plus","regarding","round","save","since","than","through","till",
				"to","toward","under","underneath","unlike","until","up","upon","versus","via","with","within","without"};
	
	
	
	
	const char **elements[]={article,noun,verb,preposition,article,noun}; // an array which point constant char pointer arrays 
	
	size_t i,j;

	char *sentences[20]; // to keep sentences 
	for(i=0;i<20;i++)
		sentences[i]=(char*)calloc(100,sizeof(char)); // give them some space, use calloc to initilaze every one of them as "0",it is neccessary for strcat to work fine
				
	char *p=NULL;  // to keep strrchr() function returns
	char *k=NULL;  // for strtod function
	
	for(i=0;i<20;i++){ // number of sentences ,now we want 20 sentences
		
		for(j=0;j<6;j++){ // number of element ,we have six element (article,noun,verb,preposition,article,noun)
			
			strcat(sentences[i],elements[j][  rand()%  (int)strtod(elements[j][0],&k)   +1  ]); // select next element from elements[] and add it to sentences[] 
			strcat(sentences[i]," "); // add space" "character
		}
		
		p=strrchr(sentences[i],' '); // find the last space" " character
		p!=NULL?*p='.':puts("Eror -1"); // if find the last space character location replace it with dot'.' else return an error message 
		sentences[i][0]=toupper(sentences[i][0]); // make capital to first character
		
	}
	
	for(i=0;i<20;i++){  // print the sentences
		printf("%s",sentences[i]);
		puts("");
	}
	
}

