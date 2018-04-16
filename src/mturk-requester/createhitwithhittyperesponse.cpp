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

#include "createhitwithhittyperesponse.h"
#include "createhitwithhittyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITWithHITTypeResponse
 *
 * \brief The CreateHITWithHITTypeResponse class provides an interace for MTurk CreateHITWithHITType responses.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::createHITWithHITType
 */

/*!
 * @brief  Constructs a new CreateHITWithHITTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateHITWithHITTypeResponse::CreateHITWithHITTypeResponse(
        const CreateHITWithHITTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateHITWithHITTypeResponsePrivate(this), parent)
{
    setRequest(new CreateHITWithHITTypeRequest(request));
    setReply(reply);
}

const CreateHITWithHITTypeRequest * CreateHITWithHITTypeResponse::request() const
{
    Q_D(const CreateHITWithHITTypeResponse);
    return static_cast<const CreateHITWithHITTypeRequest *>(d->request);
}

/*!
 * @brief  Parse a MTurk CreateHITWithHITType response.
 *
 * @param  response  Response to parse.
 */
void CreateHITWithHITTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateHITWithHITTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateHITWithHITTypeResponsePrivate
 *
 * \brief Private implementation for CreateHITWithHITTypeResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateHITWithHITTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateHITWithHITTypeResponse instance.
 */
CreateHITWithHITTypeResponsePrivate::CreateHITWithHITTypeResponsePrivate(
    CreateHITWithHITTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MTurk CreateHITWithHITTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateHITWithHITTypeResponsePrivate::parseCreateHITWithHITTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHITWithHITTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
