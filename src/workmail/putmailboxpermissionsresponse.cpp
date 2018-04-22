/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putmailboxpermissionsresponse.h"
#include "putmailboxpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::PutMailboxPermissionsResponse
 * \brief The PutMailboxPermissionsResponse class provides an interace for WorkMail PutMailboxPermissions responses.
 *
 * \inmodule QtAwsWorkMail
 *
 *  Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 *  email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or their native
 *  iOS and Android email applications. You can integrate Amazon WorkMail with your existing corporate directory and control
 *  both the keys that encrypt your data and the location in which your data is
 * 
 *  stored>
 * 
 *  The Amazon WorkMail API is designed for the following
 * 
 *  scenarios> <ul> <li>
 * 
 *  Listing and describing
 * 
 *  organization> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  user> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  group> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  resource> </li> </ul>
 * 
 *  All Amazon WorkMail API actions are Amazon-authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkMail site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkMail organization (or as set in the IAM policy). This includes, but
 *  is not limited to, the ability to create, update, and delete users, groups, and resources. This allows developers to
 *  perform the scenarios listed above, as well as give users the ability to grant access on a selective basis using the IAM
 *
 * \sa WorkMailClient::putMailboxPermissions
 */

/*!
 * Constructs a PutMailboxPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
PutMailboxPermissionsResponse::PutMailboxPermissionsResponse(
        const PutMailboxPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new PutMailboxPermissionsResponsePrivate(this), parent)
{
    setRequest(new PutMailboxPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMailboxPermissionsRequest * PutMailboxPermissionsResponse::request() const
{
    Q_D(const PutMailboxPermissionsResponse);
    return static_cast<const PutMailboxPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkMail PutMailboxPermissions \a response.
 */
void PutMailboxPermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutMailboxPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkMail::PutMailboxPermissionsResponsePrivate
 * \brief The PutMailboxPermissionsResponsePrivate class provides private implementation for PutMailboxPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a PutMailboxPermissionsResponsePrivate object with public implementation \a q.
 */
PutMailboxPermissionsResponsePrivate::PutMailboxPermissionsResponsePrivate(
    PutMailboxPermissionsResponse * const q) : WorkMailResponsePrivate(q)
{

}

/*!
 * Parses a WorkMail PutMailboxPermissions response element from \a xml.
 */
void PutMailboxPermissionsResponsePrivate::parsePutMailboxPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMailboxPermissionsResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws