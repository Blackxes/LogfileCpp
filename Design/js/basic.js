//
//

//_______________________________________________________________________________________________________________
// config object
var logConfig = {
	
	typePrefix		: "type_",
	titleElClass	: "rtitle",
	
	previousSearch	: "",
}

//_______________________________________________________________________________________________________________
// used function
var Logfile = {
	
	
}

// initialize the configuration
logConfig.Init = function()
{
	// check if there is local storage allowed
}




//_______________________________________________________________________________________________________________
// Liste runterklappem
function toggleVarList()
{
	$("#log li > div").on("click", function()
	{
		jQuery.fx.interval = 10;

		desc = $(this).find('.desc');

		if ( desc.hasClass('closed') )
			desc.removeClass('closed');
		else
			desc.addClass('closed');
	});

} // toggleVarList 
//

//_______________________________________________________________________________________________________________
// closes all Logs
function closeLogs()
{
	 $('#log').find('.desc').addClass('closed');
}

function triggerSearch()
{
	
	$('.search-value').on('input', function()
	{
		filterSearch();
	});
	
	$('#search select').change(function()
	{
		filterSearch();
	});
}

//_______________________________________________________________________________________________________________
//
function filterSearch()
{
	// variables
	hasContent 	= ($('.search-value').val().length > 0) ? true : false;
	search		= $('.search-value').val().toLowerCase();
	allSelected	= ($('#search select').val() > 0) ? false : true;
	
	// loops the loglist
	$('#log li').each(function(index, item)
	{

		// if there is no content and it is set to all
		// just display it
		if ( (hasContent == false) && (allSelected == true) )
			$(this).removeClass('hide');
		
		// check if the type is defined
		// if so filter the current item
		if (!allSelected)
		{
			if ( $(this).hasClass(logConfig.typePrefix + $('#search select').val()) == false )
			{
				if ( $(this).attr('id') >= 0)
					$(this).addClass('hide');
			}
			else
			{
				$(this).removeClass('hide');
			}
		}
		else
		{
			$(this).removeClass('hide');
		}
		
		// check if there is content
		if (hasContent == true)
		{
			// check if this item is still displayed
			if ( $(this).hasClass('hide') == false )
			{
				// value of the title in lowercase
				titleText = $(this).find('.' + logConfig.titleElClass).text().toLowerCase();
				
				// check if the text matches the search
				if ( titleText.indexOf(search) != (-1) )
				{
					$(this).removeClass('hide');
				}
				else
				{
					if ( $(this).attr('id') >= 0)
						$(this).addClass('hide');
				}
			}
		}
	});
}

//_______________________________________________________________________________________________________________
// wenn bildschirmgroesse veraendert wird
$( window ).resize(function()
{
	
});

//_______________________________________________________________________________________________________________
// 
$( document ).ready(function() 
{	
	closeLogs();
	toggleVarList();
	
	// the search
	triggerSearch();
	
});