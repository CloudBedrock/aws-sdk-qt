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

#include "resendvalidationemailresponse.h"
#include "resendvalidationemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ResendValidationEmailResponse
 * \brief The ResendValidationEmailResponse class provides an interace for ACM ResendValidationEmail responses.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/http:/docs.aws.amazon.comacm/latest/userguide/"> <i>AWS
 *  Certificate Manager User Guide</i>
 *
 * \sa AcmClient::resendValidationEmail
 */

/*!
 * Constructs a ResendValidationEmailResponse object for \a reply to \a request, with parent \a parent.
 */
ResendValidationEmailResponse::ResendValidationEmailResponse(
        const ResendValidationEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new ResendValidationEmailResponsePrivate(this), parent)
{
    setRequest(new ResendValidationEmailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResendValidationEmailRequest * ResendValidationEmailResponse::request() const
{
    Q_D(const ResendValidationEmailResponse);
    return static_cast<const ResendValidationEmailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACM ResendValidationEmail \a response.
 */
void ResendValidationEmailResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResendValidationEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACM::ResendValidationEmailResponsePrivate
 * \brief The ResendValidationEmailResponsePrivate class provides private implementation for ResendValidationEmailResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a ResendValidationEmailResponsePrivate object with public implementation \a q.
 */
ResendValidationEmailResponsePrivate::ResendValidationEmailResponsePrivate(
    ResendValidationEmailResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a ACM ResendValidationEmail response element from \a xml.
 */
void ResendValidationEmailResponsePrivate::parseResendValidationEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResendValidationEmailResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
