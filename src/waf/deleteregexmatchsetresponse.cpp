/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteregexmatchsetresponse.h"
#include "deleteregexmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::DeleteRegexMatchSetResponse
 * \brief The DeleteRegexMatchSetResponse class provides an interace for WAF DeleteRegexMatchSet responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::deleteRegexMatchSet
 */

/*!
 * Constructs a DeleteRegexMatchSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRegexMatchSetResponse::DeleteRegexMatchSetResponse(
        const DeleteRegexMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new DeleteRegexMatchSetResponsePrivate(this), parent)
{
    setRequest(new DeleteRegexMatchSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRegexMatchSetRequest * DeleteRegexMatchSetResponse::request() const
{
    Q_D(const DeleteRegexMatchSetResponse);
    return static_cast<const DeleteRegexMatchSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF DeleteRegexMatchSet \a response.
 */
void DeleteRegexMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRegexMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::DeleteRegexMatchSetResponsePrivate
 * \brief The DeleteRegexMatchSetResponsePrivate class provides private implementation for DeleteRegexMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a DeleteRegexMatchSetResponsePrivate object with public implementation \a q.
 */
DeleteRegexMatchSetResponsePrivate::DeleteRegexMatchSetResponsePrivate(
    DeleteRegexMatchSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a WAF DeleteRegexMatchSet response element from \a xml.
 */
void DeleteRegexMatchSetResponsePrivate::parseDeleteRegexMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRegexMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
