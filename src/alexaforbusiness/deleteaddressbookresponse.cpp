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

#include "deleteaddressbookresponse.h"
#include "deleteaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteAddressBookResponse
 * \brief The DeleteAddressBookResponse class provides an interace for AlexaForBusiness DeleteAddressBook responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::deleteAddressBook
 */

/*!
 * Constructs a DeleteAddressBookResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAddressBookResponse::DeleteAddressBookResponse(
        const DeleteAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteAddressBookResponsePrivate(this), parent)
{
    setRequest(new DeleteAddressBookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAddressBookRequest * DeleteAddressBookResponse::request() const
{
    Q_D(const DeleteAddressBookResponse);
    return static_cast<const DeleteAddressBookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteAddressBook \a response.
 */
void DeleteAddressBookResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteAddressBookResponsePrivate
 * \brief The DeleteAddressBookResponsePrivate class provides private implementation for DeleteAddressBookResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteAddressBookResponsePrivate object with public implementation \a q.
 */
DeleteAddressBookResponsePrivate::DeleteAddressBookResponsePrivate(
    DeleteAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteAddressBook response element from \a xml.
 */
void DeleteAddressBookResponsePrivate::parseDeleteAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAddressBookResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws