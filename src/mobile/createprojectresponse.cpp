/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createprojectresponse.h"
#include "createprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Mobile {

/**
 * @class  CreateProjectResponse
 *
 * @brief  Handles Mobile CreateProject responses.
 *
 * @see    MobileClient::createProject
 */

/**
 * @brief  Constructs a new CreateProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProjectResponse::CreateProjectResponse(
        const CreateProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new CreateProjectResponsePrivate(this), parent)
{
    setRequest(new CreateProjectRequest(request));
    setReply(reply);
}

const CreateProjectRequest * CreateProjectResponse::request() const
{
    Q_D(const CreateProjectResponse);
    return static_cast<const CreateProjectRequest *>(d->request);
}

/**
 * @brief  Parse a Mobile CreateProject response.
 *
 * @param  response  Response to parse.
 */
void CreateProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateProjectResponsePrivate
 *
 * @brief  Private implementation for CreateProjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateProjectResponse instance.
 */
CreateProjectResponsePrivate::CreateProjectResponsePrivate(
    CreateProjectQueueResponse * const q) : CreateProjectPrivate(q)
{

}

/**
 * @brief  Parse an Mobile CreateProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateProjectResponsePrivate::CreateProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProjectResponse"));
    /// @todo
}

} // namespace Mobile
} // namespace AWS
