#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> vs = {"gullible", "charm", "multitude", "dubious", "orphan", "reckon", "imply", "leniently",
                         "indulgently", "bleak",
                         "drastically", "fatigue", "gritty", "raw", "apparently", "presumably", "that is to say",
                         "thingy", "mere", "slant",
                         "slope", "meadow", "sparse", "fertile", "prolific", "thrive", "purge", "ark", "contrived",
                         "perish", "vanish",
                         "divert", "wayward", "restraint", "sway", "swing", "stray", "inhibit", "intercept", "diffused",
                         "to be spot on",
                         "swamp", "bog", "be swamped", "get bogged down", "carry out (an investigation)", "mild",
                         "tender", "gentle",
                         "coherent", "contemplate", "comprehensive", "reconciliation", "embody", "empower", "muse",
                         "laid-back",
                         "exaggeration", "ubiquitous", "tapeworm", "plausible", "squeeze", "doormat", "subtle",
                         "perceptible", "feat", "tough luck", "fluctuate", "abrogate", "invigorate", "refreshing",
                         "bracing",
                         "truce", "intervene", "blast", "distract", "impoverished", "hardship", "ledger", "back up",
                         "well-off",
                         "wealth", "affluent", "assess", "live within means", "think the world of",
                         "make the ends meet",
                         "poverty", "rejuvenate", "renovate", "regain", "imposing", "restore", "recreate", "regenerate",
                         "drowsy", "dwell", "adjust", "arrange", "eerie", "thump", "crackle", "petrify", "devastate",
                         "insecure", "convey", "elaborate", "frustrate", "rag", "steady shift", "plethora", "lasting",
                         "ongoing",
                         "prepend", "deride", "cove", "brush up", "evocative", "destitute", "prosperous", "obsolete",
                         "cramp",
                         "anticipate", "curds", "fetus", "sordid", "far-fetched", "rusty"
    };
    vector<string> vs1 = {"vex", "pay tribute", "on the off chance", "put up with", "cope with", "give smth a pass",
                          "dangle", "robust", "counterfeit", "speculate", "auxiliary", "obey", "postpone", "preacher",
                          "petite", "abhorrent", "tear", "sting", "clumsy", "sloppy", "officiary", "mandatory",
                          "withdraw",
                          "disposable () + (income)", "turquoise", "sheer", "arid", "pristine", "rugged", "amenity",
                          "enrollment", "dense", "unravel", "pour", "burst", "procrastinate", "reign over/for", "dormitory"
    };
    vector<string> vs2 = {"outrageous", "peculiar", "negotiate", "out of the woods", "flowerbed", "appraise", "loath",
                          "crease", "derive", "observant", "undergrowth"
    };
    vector<string> vs3 = {"accommodation", "afterwards", "attitude", "bear", "bend", "brief", "broad", "chin",
                          "claim /the/for/on", "claim sb's life", "to be spot on", "reluctant", "hit the nail on the head",
                          "charge", "conduct", "contribute", "damp", "moisture", "gutter", "blur", "debt", "deliberate",
                          "delight", "demand", "disapprove", "distant", "eager", "encourage", "excerpt", "fasten",
                          "fetch", "favour", "flavour", "gather", "gradually", "hollow", "inquire", "intend", "keen",
                          "odour", "apparent", "gorge", "inherit", "in two minds", "spank", "shrub", "dusk", "ornate",
                          "under your breath", "ward off evil", "be in luck", "blow chances", "fighting chances",
                          "stand a chance", "whatsisname", "give or take", "words to that effect", "sort of", "loads of",
                          "self-catering", "knot", "enormous", "involuntarily", "properly", "pick", "pile",
                          "immerse in", "gurgle", "vow", "ambient", "objection", "otherwise", "indiscernible",
                          "indistinct", "vain", "terrestrial", "aquatic", "focus", "nutrient", "diurnal", "nocturnal",
                          "fringe", "dilute", "myriad", "remnant", "peat", "chunk", "crucial", "icky", "freight",
                          "possession", "acquire", "request", "draft", "ward", "praise", "stringent"

    };

    vector<string> vs4 = {"pride", "refer", "relief", "rid", "rub", "scheme", "demise", "neat", "scrap", "scrape",
                          "shallow", "shrink", "sore", "spite", "spill", "spoil", "steep", "stir", "clay", "herb", "sage",
                          "stretch", "stiff", "sweep", "tap", "throughout", "tread", "undo", "upwards", "whistle",
                          "mend", "obtain"
    };

    vector<string> IELTS = {"extend", "fell", "fascinate", "obscure", "diverse", "resilient", "detect",
                            "grandeur", "reduce", "venue", "engage", "industrious (hardworking)", "merely", "obesity",
                            "overwhelming", "cast", "clog (up)", "disruptive", "intrinsic", "spring up",
                            "appeal", "commuter", "embrace", "flair / for", "fume", "hamper", "incentive", "markedly",
                            "monetary", "plod", "span", "sprawl", "rural", "fumes", "attribute / sth to (sth/smb)",
                            "carve", "deed", "encompass", "function", "inscribe", "literacy", "scholar", "settle", "token",
                            "garland", "graceful", "emerge", "scathe", "frail", "prominent", "prop", "reminiscent",
                            "renowned", "sharpen",

                            "bulk/ (in) bulk ", "bulk of smth", "cripple", "decline", "lure", "rampant", "retain", "standpoint",
                            "from stem to stern", "stem", "cognition", "dementia", "deterioration", "impaired",
                            "rodent", "spatial", "stave off", "remorse", "absent",

                            "alleviate", "ascertain", "deem", "enhance", "recur", "pertain to", "marvel", "occur",
                            "on/off site", "equinox", "strive", "unveil", "rube", "billowy",

                            "wilderness",
                            "wary", "principle", "remote", "dump", "culprit", "shun", "endeavour", "hone",
                            "resort", "survey", "afloat", "tip", "allegedly", "binge",

                            "burgeoning", "conglomerate",
                            "endorsement", "fleeting", "spurious", "staple (?)", "forge (?)", "prevail", "soar",
                            "prevalent", "decisive", "preponderance", "remainder", "looming", "proponent", "boon",
                            "enticing", "turnover", "immense", "undergo", "eradicate", "imposed", "adolescent",
                            "susceptible", "acquaintance", "unfold", "persist", "dire", "inordinate", "discrepancy",
                            "invaluable", "commensurate", "floss",

                            "unwieldy", "ramp", "necessitate", "camaraderie", "incapacitate", "curb", "account for",
                            "abound", "solitary", "recite", "kinaesthetic", "fidget", "hinder", "incorporate",
                                "compulsory", "mandate", "latter", "novel", "inquisitiveness", "moderately",
                            "profoundly", "simultaneously", "transfer",

                            "validate", "suitable", "ruling", "refinement", "ransack", "infringement", "entrepreneur",
                            "clamp",
                            "sustained", "prolonged", "pitch", "inflexibility", "handle", "confer", "coarse",
                            "vilified", "utter", "transmit", "snap", "set out", "requisite", "rally", "perseverance",
                            "insulation", "inquiry", "inexplicably", "indispensable", "disparate", "chart",
                            "incandescent", "filament",

                            "aisle", "abolish", "timber", "bane", "faint",
                            "frown", "exhilarating", "crave", "incline", "imminent", "elation", "whizz", "zoom",
                            "whirl", "hurtle", "stagger", "profusely", "deprived", "cataract", "teeming", "outright",
                            "blithe", "splendid", "fret", "shrug off", "shriek", "swell", "bloat", "encumbered",
                            "paddle", "grind", "peel", "summon", "haul",

                            "succumb", "albeit", "horde", "gut",
                            "clammy", "nag", "shed", "crumple", "pram", "jury", "embark", "baffle",

                            "rehabilitate", "humane", "chic", "barred", "ordnance", "foreman", "deprecate", "duvet",
                            "interrogation", "refugee", "fugitive", "atrocious", "affiliate",


                            "scale", "incarcerate", "cluster", "seize", "detain", "smuggle", "askew", "tether",
                            "recluse", "contort", "scatter",

                            "aspire", "disseminate", "conceal", "cosmopolitan", "blurb", "sincere", "wobble", "affable",
                            "prejudice", "ostracise", "prompt", "innocuous", "nudge", "exacerbate",

                            "dwindle", "acne", "rash", "sag", "conceive", "chard", "kale", "sprout", "oat", "exquisite",
                            "hazelnut", "salmon", "sesame", "blotch", "blimp",

                            "reinstate", "therefore", "thus", "thereby", "exodus", "pronto", "rendezvous", "nondescript",
                            "blossom", "vanity", "mould", "brazen", "flamboyant", "relish", "stark", "clutter",
                            "impend", "blend", "merit", "revamp", "hector", "kerb", "expanse",

                            "hermit", "devise", "compel", "muddle", "mesmeric", "painstaking", "sleeve", "abide",
                            "conker", "rivet", "appliance", "warden", "inflate",

                            "breach", "divulge",

                            "glimpse", "prone", "faith", "foster", "attain", "insightful", "prestigious", "crawl",
                            "leap", "limp", "moor", "hunch", "freckle", "allegation", "ripe", "prosecution",
                            "confinement", "trawl", "testimony", "sow", "cling", "bind", "arise", "bid", "proceed",

                            "diminish", "augment",
                            "fender", "arouse",

    };

    vector<string> to_learn = {
            "occasion", "ought",
            "pin", "taking hold"
    };

    vector<string> books = {
            "prudent", "refrain", "sorrow", "usher", "mist", ""
    };

    move(vs1.begin(), vs1.end(), back_inserter(vs));
    move(vs2.begin(), vs2.end(), back_inserter(vs));
    move(vs3.begin(), vs3.end(), back_inserter(vs));
    move(vs4.begin(), vs4.end(), back_inserter(vs));
    move(IELTS.begin(), IELTS.end(), back_inserter(vs));
    move(to_learn.begin(), to_learn.end(), back_inserter(vs));

    sort(vs.begin(), vs.end());

    for (auto &a : vs) {
        cout << a << endl;
    }
    cout << vs.size();
    return 0;
}