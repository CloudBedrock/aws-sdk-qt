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

#include "updatecertificateoptionsresponse.h"
#include "updatecertificateoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::UpdateCertificateOptionsResponse
 * \brief The UpdateCertificateOptionsResponse class provides an interace for ACM UpdateCertificateOptions responses.
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
 * \sa AcmClient::updateCertificateOptions
 */

/*!
 * Constructs a UpdateCertificateOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCertificateOptionsResponse::UpdateCertificateOptionsResponse(
        const UpdateCertificateOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new UpdateCertificateOptionsResponsePrivate(this), parent)
{
    setRequest(new UpdateCertificateOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCertificateOptionsRequest * UpdateCertificateOptionsResponse::request() const
{
    Q_D(const UpdateCertificateOptionsResponse);
    return static_cast<const UpdateCertificateOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACM UpdateCertificateOptions \a response.
 */
void UpdateCertificateOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateCertificateOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACM::UpdateCertificateOptionsResponsePrivate
 * \brief The UpdateCertificateOptionsResponsePrivate class provides private implementation for UpdateCertificateOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a UpdateCertificateOptionsResponsePrivate object with public implementation \a q.
 */
UpdateCertificateOptionsResponsePrivate::UpdateCertificateOptionsResponsePrivate(
    UpdateCertificateOptionsResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a ACM UpdateCertificateOptions response element from \a xml.
 */
void UpdateCertificateOptionsResponsePrivate::parseUpdateCertificateOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCertificateOptionsResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
