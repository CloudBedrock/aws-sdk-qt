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

#include "createbytematchsetresponse.h"
#include "createbytematchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::CreateByteMatchSetResponse
 * \brief The CreateByteMatchSetResponse class provides an interace for WAF CreateByteMatchSet responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::createByteMatchSet
 */

/*!
 * Constructs a CreateByteMatchSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateByteMatchSetResponse::CreateByteMatchSetResponse(
        const CreateByteMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WafResponse(new CreateByteMatchSetResponsePrivate(this), parent)
{
    setRequest(new CreateByteMatchSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateByteMatchSetRequest * CreateByteMatchSetResponse::request() const
{
    Q_D(const CreateByteMatchSetResponse);
    return static_cast<const CreateByteMatchSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF CreateByteMatchSet \a response.
 */
void CreateByteMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateByteMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::CreateByteMatchSetResponsePrivate
 * \brief The CreateByteMatchSetResponsePrivate class provides private implementation for CreateByteMatchSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a CreateByteMatchSetResponsePrivate object with public implementation \a q.
 */
CreateByteMatchSetResponsePrivate::CreateByteMatchSetResponsePrivate(
    CreateByteMatchSetResponse * const q) : WafResponsePrivate(q)
{

}

/*!
 * Parses a WAF CreateByteMatchSet response element from \a xml.
 */
void CreateByteMatchSetResponsePrivate::parseCreateByteMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateByteMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
